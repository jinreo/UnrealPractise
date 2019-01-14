// Fill out your copyright notice in the Description page of Project Settings.

#include "BountyDashCharacter.h"
#include "BountyDash.h"
#include "BountyDashGameMode.h"
#include "ConstructorHelpers.h"

#include "Animation/AnimInstance.h"
#include "Animation/AnimBlueprint.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "EngineUtils.h"
#include "Engine/TargetPoint.h"
#include "Engine/World.h"

// Sets default values
ABountyDashCharacter::ABountyDashCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UCapsuleComponent* capsuleComp = GetCapsuleComponent();

	capsuleComp->InitCapsuleSize(42.0f, 96.0f);

	ConstructorHelpers::FObjectFinder<UAnimBlueprint> myAnimBP(TEXT("/Game/BarrelHopper/Character/BH_Character_AnimBP.BH_Character_AnimBP"));
	ConstructorHelpers::FObjectFinder<USkeletalMesh> myMesh(TEXT("/Game/BarrelHopper/Character/Mesh/SK_Mannequin.SK_Mannequin"));

	if (myMesh.Succeeded() && myAnimBP.Succeeded())
	{
		USkeletalMeshComponent* meshComp = GetMesh();
		meshComp->SetSkeletalMesh(myMesh.Object);
		meshComp->SetAnimInstanceClass(myAnimBP.Object->GeneratedClass);

		meshComp->SetRelativeLocation(FVector(0.0f, 0.0f, -capsuleComp->GetUnscaledCapsuleHalfHeight()));
		meshComp->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

		UCharacterMovementComponent* movementComp = GetCharacterMovement();
		movementComp->JumpZVelocity = 1450.0f;
		movementComp->GravityScale = 4.5f;
	}

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	check(CameraBoom);
	CameraBoom->AttachTo(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->AddRelativeLocation(FVector(0.0f, 0.0f, 160.0f));

	FollowCam = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCam"));
	check(FollowCam);
	FollowCam->AttachTo(CameraBoom, USpringArmComponent::SocketName);
	FollowCam->AddRelativeRotation(FQuat(FRotator(-10.0f, 0.0f, 0.0f)));

	CharSpeed = 10.0f;

	capsuleComp->OnComponentBeginOverlap.AddDynamic(this, &ABountyDashCharacter::MyOnComponentOverlap);
	capsuleComp->OnComponentEndOverlap.AddDynamic(this, &ABountyDashCharacter::MyOnComponentEndOverlap);
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ABountyDashCharacter::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<ATargetPoint> TargetIter(GetWorld()); TargetIter; ++TargetIter)
	{
		TargetArray.Add(*TargetIter);
	}

	TargetArray.Sort([](const AActor& A, const AActor& B)->bool
	{
		return (A.GetActorLocation().Y < B.GetActorLocation().Y);
	});

	CurrentLocation = ((TargetArray.Num() / 2) + (TargetArray.Num() % 2));
}

// Called every frame
void ABountyDashCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (TargetArray.Num() > 0)
	{
		FVector actorLoc = GetActorLocation();
		FVector targetLoc = TargetArray[CurrentLocation]->GetActorLocation();
		targetLoc.Z = actorLoc.Z;
		targetLoc.X = actorLoc.X;

		if (targetLoc != actorLoc)
		{
			SetActorLocation(FMath::Lerp(actorLoc, targetLoc, CharSpeed * DeltaTime));
		}
	}
}

// Called to bind functionality to input
void ABountyDashCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(InputComponent);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	InputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	InputComponent->BindAction("MoveRight", IE_Pressed, this, &ABountyDashCharacter::MoveRight);
	InputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABountyDashCharacter::MoveLeft);
}

void ABountyDashCharacter::ScoreUp()
{

}

void ABountyDashCharacter::MoveRight()
{
	if ((Controller != nullptr))
	{
		if (CurrentLocation < TargetArray.Num() - 1)
		{
			CurrentLocation++;
		}
		else
		{
			// Empty
		}
	}
}

void ABountyDashCharacter::MoveLeft()
{
	if ((Controller != nullptr))
	{
		if (CurrentLocation > 0)
		{
			CurrentLocation--;
		}
		else
		{
			// Empty
		}
	}
}

void ABountyDashCharacter::MyOnComponentEndOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
}

void ABountyDashCharacter::MyOnComponentOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult&SweepResult)
{

}