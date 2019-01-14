// Fill out your copyright notice in the Description page of Project Settings.

#include "Obstacle.h"
#include "BountyDash.h"
#include "BountyDashGameMode.h"

#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

AObstacle::AObstacle()
{
	PrimaryActorTick.bCanEverTick = true;
	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	check(Collider);

	RootComponent = Collider;
	Collider->SetCollisionProfileName("OverlapAllDynamic");

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	check(Mesh);
	Mesh->AttachTo(Collider);
	Mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	KillPoint = -20000.0f;

	OnActorBeginOverlap.AddDynamic(this, &AObstacle::MyOnActorOverlap);
	OnActorBeginOverlap.AddDynamic(this, &AObstacle::MyOnActorEndOverlap);
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float gameSpeed = GetCustomGameMode<ABountyDashGameMode>(GetWorld())->GetInvGameSpeed();

	AddActorWorldOffset(FVector(gameSpeed, 0.0f, 0.0f));

	if (GetActorLocation().X < KillPoint)
	{
		Destroy();
	}
}

void AObstacle::MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)
{
}

void AObstacle::MyOnActorEndOverlap(AActor* OverlappedActor, AActor* otherActor)
{
}

void AObstacle::SetkillPoint(float point)
{
	KillPoint = point;
}

float AObstacle::GetkillPoint()
{
	return KillPoint;
}