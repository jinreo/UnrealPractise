// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "NSCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"

#include "Net/UnrealNetwork.h"
#include "NSPlayerState.h"

#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// ANSCharacter

ANSCharacter::ANSCharacter()
{
	// 콜리전 캡슐 크기 조정
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// 입력에 대한 회전율 조정
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// 카메라 컴포넌트 생성
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// 1인칭(이 폰을 조정하는) 시점에서 보이게 될 메시 컴포넌트 생성
	FP_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterFP_Mesh"));
	FP_Mesh->SetOnlyOwnerSee(true);
	FP_Mesh->SetupAttachment(FirstPersonCameraComponent);
	FP_Mesh->bCastDynamicShadow = false;
	FP_Mesh->CastShadow = false;
	FP_Mesh->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	FP_Mesh->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	// 건 메시 컴포넌트 생성
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// 소유자만이 이 메시를 볼 것이다
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	FP_Gun->SetupAttachment(FP_Mesh, TEXT("GripPoint"));
	
	// 건 메시 컴포넌트 생성하기
	TP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TP_Gun"));
	TP_Gun->SetOwnerNoSee(true);
	TP_Gun->SetupAttachment(GetMesh(), TEXT("hand_rSocket"));
	
	GetMesh()->SetOwnerNoSee(true); // 예외 발생

	// 파티클 생성
	TP_GunShotParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSysTP"));
	TP_GunShotParticle->bAutoActivate = false;
	TP_GunShotParticle->AttachTo(TP_Gun);
	TP_GunShotParticle->SetOwnerNoSee(true);

	// 파티클 생성
	FP_GunShotParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FP_GunShotParticle"));
	FP_GunShotParticle->bAutoActivate = false;
	FP_GunShotParticle->AttachTo(FP_Gun);
	FP_GunShotParticle->SetOnlyOwnerSee(true);

	BulletParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BulletSysTP"));
	BulletParticle->bAutoActivate = false;
	BulletParticle->AttachTo(FirstPersonCameraComponent);
}

void ANSCharacter::BeginPlay()
{
	// 부모 클래스를 호출한다
	Super::BeginPlay();
	
	if (Role != ROLE_Authority)
	{
		SetTeam(CurrentTeam);
	}
}

void ANSCharacter::SetTeam_Implementation(ETeam NewTeam)
{
	FLinearColor outColour;
	if (NewTeam == ETeam::BLUE_TEAM)
	{
		outColour = FLinearColor(0.0f, 0.0f, 0.5f);
	}
	else
	{
		outColour = FLinearColor(0.5f, 0.0f, 0.0f);
	}
	if (DynamicMat == nullptr)
	{
		DynamicMat = UMaterialInstanceDynamic::Create(GetMesh()->GetMaterial(0), this);
		DynamicMat->SetVectorParameterValue(TEXT("BodyColor"), outColour);
		GetMesh()->SetMaterial(0, DynamicMat);
		FP_Mesh->SetMaterial(0, DynamicMat);
	}
}

//////////////////////////////////////////////////////////////////////////
// 입력

void ANSCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// 게임플레이 키 바인딩 설정
	check(PlayerInputComponent);

	// 점프 이벤트 바인드
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// 발사 이벤트 바인드
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ANSCharacter::OnFire);
	
	// 이동 이벤트 바인드
	PlayerInputComponent->BindAxis("MoveForward", this, &ANSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ANSCharacter::MoveRight);

	// 다양한 종류의 기기를 다르게 다루기 위해 2가지 버전의 로테이션 바인딩을 가진다
	// "turn"은 마우스 같은 절대 델타를 제공하는 기기를 다룬다
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ANSCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ANSCharacter::LookUpAtRate);
}

void ANSCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ANSCharacter, CurrentTeam);
}

void ANSCharacter::OnFire()
{
	// 지정되었다면 발사 애니메이션 재생을 시도한다
	if (FP_FireAnimation != NULL)
	{
		// 팔 메시의 애니메이션 오브젝트를 얻는다
		UAnimInstance* AnimInstance = FP_Mesh->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FP_FireAnimation, 1.f);
		}
	}

	// 지정되었다면 FP 파티클 이펙트를 재생한다
	if (FP_GunShotParticle != nullptr)
	{
		FP_GunShotParticle->Activate(true);
	}

	FVector mousePos;
	FVector mouseDir;

	APlayerController* pController = Cast<APlayerController>(GetController());
	FVector2D ScreenPos = GEngine->GameViewport->Viewport->GetSizeXY();

	pController->DeprojectScreenPositionToWorld(ScreenPos.X / 2.0f, ScreenPos.Y / 2.0f, mousePos, mouseDir);
	mouseDir *= 10000000.0f;

	ServerFire(mousePos, mouseDir);

}

bool ANSCharacter::ServerFire_Validate(const FVector pos, const FVector dir)
{
	if (pos != FVector(ForceInit) && dir != FVector(ForceInit))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ANSCharacter::ServerFire_Implementation(const FVector pos, const FVector dir)
{
	Fire(pos, dir);
	MultiCastShootEffects();
}

void ANSCharacter::MultiCastShootEffects_Implementation()
{
	// 지정되었다면 발사 애니메이션 재생을 시도한다
	if (TP_FireAnimation != NULL)
	{
		// 팔 메시의 애니메이션 오브젝트를 얻는다
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(TP_FireAnimation, 1.f);
		}
	}

	// 지정된 경우 사운드 재생을 시도한다.
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	if (TP_GunShotParticle != nullptr)
	{
		TP_GunShotParticle->Activate(true);
	}

	if (BulletParticle != nullptr)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BulletParticle->Template, BulletParticle->GetComponentLocation(), BulletParticle->GetComponentRotation());
	}
}

void ANSCharacter::Fire(const FVector pos, const FVector dir)
{
	// 레이캐스트 수행
	FCollisionObjectQueryParams ObjQuery;
	ObjQuery.AddObjectTypesToQuery(ECC_GameTraceChannel1);

	FCollisionQueryParams ColQuery;
	ColQuery.AddIgnoredActor(this);

	FHitResult HitRes;
	GetWorld()->LineTraceSingleByObjectType(HitRes, pos, dir, ObjQuery, ColQuery);

	DrawDebugLine(GetWorld(), pos, dir, FColor::Red, true, 100, 0, 5.0f);

	if (HitRes.bBlockingHit)
	{
		ANSCharacter* OtherChar = Cast<ANSCharacter>(HitRes.GetActor());
		if (OtherChar != nullptr && OtherChar->GetNSPlayerState()->Team != this->GetNSPlayerState()->Team)
		{
			FDamageEvent thisEvent(UDamageType::StaticClass());
			OtherChar->TakeDamage(10.0f, thisEvent, this->GetController(), this);

			APlayerController* thisPC = Cast<APlayerController>(GetController());
			thisPC->ClientPlayForceFeedback(HitSuccessFeedback, false, NAME_None);
		}
	}
}

float ANSCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	if (Role == ROLE_Authority && DamageCauser != this && NSPlayerState->Health > 0)
	{
		NSPlayerState->Health -= Damage;
		PlayPain();

		if (NSPlayerState->Health <= 0)
		{
			NSPlayerState->Deaths++;
			// 플레이어가 리스폰할 시간동안 죽는다
			MultiCastRagdoll();
			ANSCharacter * OtherChar = Cast<ANSCharacter>(DamageCauser);

			if (OtherChar)
			{
				OtherChar->NSPlayerState->Score += 1.0f;
			}

			// 3초 뒤에 리스폰된다
			FTimerHandle thisTimer;

			GetWorldTimerManager().SetTimer<ANSCharacter>(thisTimer, this, &ANSCharacter::Respawn, 3.0f, false);
		}
	}
	return Damage;
}

void ANSCharacter::PlayPain_Implementation()
{
	if (Role == ROLE_AutonomousProxy)
	{
		UGameplayStatics::PlaySoundAtLocation(this, PainSound, GetActorLocation());
	}
}

void ANSCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// 해당 방향에서의 이동 추가
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ANSCharacter::MultiCastRagdoll_Implementation()
{
	GetMesh()->SetPhysicsBlendWeight(1.0f);
	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->SetCollisionProfileName("Ragdoll");
}

void ANSCharacter::Respawn()
{
	if (Role == ROLE_Authority)
	{
		// 게임 모드로부터 위치 얻기
		NSPlayerState->Health = 100.0f;
		Cast<ANSGameMode>(GetWorld()->GetAuthGameMode())->Respawn(this);

		Destroy(true, true);
	}
}

void ANSCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	NSPlayerState = Cast<ANSPlayerState>(PlayerState);

	if (Role == ROLE_Authority && NSPlayerState != nullptr)
	{
		NSPlayerState->Health = 100.0f;
	}
}

ANSPlayerState* ANSCharacter::GetNSPlayerState()
{
	if (NSPlayerState)
	{
		return NSPlayerState;
	}
	else
	{
		NSPlayerState = Cast<ANSPlayerState>(PlayerState);
		return NSPlayerState;
	}
}

void ANSCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// 해당 방향에서의 이동 추가
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ANSCharacter::SetNSPlayerState(ANSPlayerState* newPS)
{
	// PS가 유효하고 서버에만 설정되었는지 확인한다
	if (newPS && Role == ROLE_Authority)
	{
		NSPlayerState = newPS;
		PlayerState = newPS;
	}
}

void ANSCharacter::TurnAtRate(float Rate)
{
	// rate 정보로부터 이 프레임에 대한 델타 계산
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ANSCharacter::LookUpAtRate(float Rate)
{
	// rate 정보로부터 이 프레임에 대한 델타 계산
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}