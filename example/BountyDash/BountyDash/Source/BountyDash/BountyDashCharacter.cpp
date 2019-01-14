#include "BountyDashCharacter.h"

#include "BountyDash.h" 
#include "Animation/AnimInstance.h" 
#include "Animation/AnimBlueprint.h" 
#include "Engine/TargetPoint.h"
#include "BountyDashGameMode.h"
#include "Obstacle.h"
#include "Coin.h"
#include "Floor.h"

#include "ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

ABountyDashCharacter::ABountyDashCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// 콜리전 캡슐 크기 조절
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	//언리얼 프로젝트의 에셋 경로를 올바르게 맞춰야 한다
	ConstructorHelpers::FObjectFinder<UAnimBlueprint> myAnimBP(TEXT("/Game/Barrel_Hopper/Character/BH_Character_AnimBP.BH_Character_AnimBP"));
	ConstructorHelpers::FObjectFinder<USkeletalMesh> myMesh(TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin"));

	if (myMesh.Succeeded() && myAnimBP.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(myMesh.Object);
		GetMesh()->SetAnimInstanceClass(myAnimBP.Object->GeneratedClass);
	}

	// 메시를 회전하고 움직여 캡슐 컴포넌트에 알맞게 맞춘다 
	GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, -GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight()));
	GetMesh()->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	// 캐릭터 이동 구성
	GetCharacterMovement()->JumpZVelocity = 1450.0f;
	GetCharacterMovement()->GravityScale = 4.5f;

	// 카메라 붐 만들기 (콜리전이 있다면 플레이어 쪽으로 끌어당긴다)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	check(CameraBoom);

	CameraBoom->AttachTo(RootComponent);

	// 카메라가 캐릭터 뒤의 일정 간격만큼 따라온다.
	CameraBoom->TargetArmLength = 500.0f;

	// 플레이어로의 오프셋
	CameraBoom->AddRelativeLocation(FVector(0.0f, 0.0f, 160.0f));

	// Follow 카메라 생성
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	check(FollowCamera);

	// 붐 끝에 카메라를 연결하고 붐이 컨트롤러 방향과 일치하도록 조정한다 
	FollowCamera->AttachTo(CameraBoom, USpringArmComponent::SocketName);

	// 카메라가 약간 내려다보도록 하기 위한 회전 변경
	FollowCamera->AddRelativeRotation(FQuat(FRotator(-10.0f, 0.0f, 0.0f)));

	// 게임 속성
	CharSpeed = 10.0f;

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ABountyDashCharacter::MyOnComponentOverlap);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &ABountyDashCharacter::MyOnComponentEndOverlap);

	// ID 0(기본 컨트롤러)의 입력 가져오기
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// 사운드 생성하기
	hitObstacleSound = CreateDefaultSubobject<UAudioComponent>(TEXT("HitSound"));
	hitObstacleSound->bAutoActivate = false;
	hitObstacleSound->AttachTo(RootComponent);

	ConstructorHelpers::FObjectFinder<USoundCue>mySoundCue(TEXT("/Game/GruntCue.GruntCue"));

	if (mySoundCue.Succeeded())
	{
		hitObstacleSound->SetSound(mySoundCue.Object);
	}

	dingSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Ding"));
	dingSound->bAutoActivate = false;
	dingSound->AttachTo(RootComponent);

	ConstructorHelpers::FObjectFinder<USoundCue> myCue(TEXT("/Game/ DingCue.DingCue"));

	if (myCue.Succeeded())
	{
		dingSound->SetSound(myCue.Object);
	}
}

// Called when the game starts or when spawned
void ABountyDashCharacter::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<ATargetPoint> TargetIter(GetWorld()); TargetIter; ++TargetIter)
	{
		TargetArray.Add(*TargetIter);
	}

	auto SortPred = [](const AActor& A, const AActor& B)->bool
	{
		return(A.GetActorLocation().Y < B.GetActorLocation().Y);
	};
	TargetArray.Sort(SortPred);

	CurrentLocation = ((TargetArray.Num() / 2) + (TargetArray.Num() % 2) - 1);

	for (TActorIterator<AFloor> TargetIter(GetWorld()); TargetIter; ++TargetIter)
	{
		Killpoint = TargetIter->GetKillPoint();
	}
}

// Called every frame
void ABountyDashCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (TargetArray.Num() > 0)
	{
		FVector targetLoc = TargetArray[CurrentLocation]->GetActorLocation();
		targetLoc.Z = GetActorLocation().Z;
		targetLoc.X = GetActorLocation().X;

		if (targetLoc != GetActorLocation())
		{
			SetActorLocation(FMath::Lerp(GetActorLocation(), targetLoc, CharSpeed * DeltaSeconds));
		}
	}

	if (bBeingPushed) {
		float moveSpeed = GetCustomGameMode<ABountyDashGameMode>(GetWorld())->GetInvGameSpeed();
		AddActorLocalOffset(FVector(moveSpeed, 0.0f, 0.0f));
	}

	if (CanMagnet)
	{
		CoinMagnet();
	}

	if (GetActorLocation().X < Killpoint) {
		GetCustomGameMode<ABountyDashGameMode>(GetWorld())->GameOver();
	}
}

// Called to bind functionality to input
void ABountyDashCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 게임플레이 키 바인드 설정하기
	check(InputComponent);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	InputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	InputComponent->BindAction("MoveRight", IE_Pressed, this, &ABountyDashCharacter::MoveRight);

	InputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABountyDashCharacter::MoveLeft);

	InputComponent->BindAction("Reset", IE_Pressed, this, &ABountyDashCharacter::Reset).bExecuteWhenPaused = true;
}

void ABountyDashCharacter::MoveRight()
{
	if ((Controller != nullptr))
	{
		if (CurrentLocation < TargetArray.Num() - 1)
		{
			++CurrentLocation;
		}
		else
		{
			// 아무것도 하지 않는다
		}
	}
}

void ABountyDashCharacter::MoveLeft()
{
	if ((Controller != nullptr))
	{
		if (CurrentLocation > 0)
		{
			--CurrentLocation;
		}
		else
		{
			// 아무것도 하지 않는다
		}
	}
}

void ABountyDashCharacter::MyOnComponentOverlap(class UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->GetClass()->IsChildOf(AObstacle::StaticClass()))
	{
		FVector vecBetween = OtherActor->GetActorLocation() - GetActorLocation();
		float AngleBetween = FMath::Acos(FVector::DotProduct(vecBetween.GetSafeNormal(), GetActorForwardVector().GetSafeNormal()));

		if (AngleBetween < 60.0f)
		{
			AObstacle* pObs = Cast<AObstacle>(OtherActor);

			if (!bBeingPushed)
			{
				hitObstacleSound->Play();
			}

			if (pObs && CanSmash)
			{
				pObs->GetDestructable()->ApplyRadiusDamage(10000, GetActorLocation(), 10000, 10000, true);
			}
			else
			{
				bBeingPushed = true;
			}
		}
	}
}

void ABountyDashCharacter::MyOnComponentEndOverlap(class UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->GetClass()->IsChildOf(AObstacle::StaticClass()))
	{
		bBeingPushed = false;
	}
}

void ABountyDashCharacter::ScoreUp()
{
	Score++;
	GetCustomGameMode<ABountyDashGameMode>(GetWorld())->CharScoreUp(Score);
	dingSound->Play();
}

void ABountyDashCharacter::PowerUp(EPowerUp Type)
{
	switch (Type)
	{
	case EPowerUp::SPEED:
	{
		GetCustomGameMode<ABountyDashGameMode>(GetWorld())->ReduceGameSpeed();
		break;
	}
	case EPowerUp::SMASH:
	{
		CanSmash = true;
		FTimerHandle newTimer;
		GetWorld()->GetTimerManager().SetTimer(newTimer, this, &ABountyDashCharacter::StopSmash, SmashTime, false);
		break;
	}
	case EPowerUp::MAGNET:
	{
		CanMagnet = true;
		FTimerHandle newTimer;
		GetWorld()->GetTimerManager().SetTimer(newTimer, this, &ABountyDashCharacter::StopMagnet, MagnetTime, false);
		break;
	}
	default:
		break;
	}
}

void ABountyDashCharacter::StopMagnet()
{
	CanMagnet = false;
}

void ABountyDashCharacter::StopSmash()
{
	CanSmash = false;
}

void ABountyDashCharacter::CoinMagnet() {
	for (TActorIterator<ACoin> coinIter(GetWorld()); coinIter; ++coinIter)
	{
		FVector between = GetActorLocation() - coinIter->GetActorLocation();
		if (FMath::Abs(between.Size()) < MagnetReach)
		{
			FVector CoinPos = FMath::Lerp((*coinIter)->GetActorLocation(), GetActorLocation(), 0.2f);
			(*coinIter)->SetActorLocation(CoinPos);
			(*coinIter)->BeingPulled = true;
		}
	}
}

int ABountyDashCharacter::GetScore()
{
	return Score;
}

void ABountyDashCharacter::Reset()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("BountyDashMap"));
}