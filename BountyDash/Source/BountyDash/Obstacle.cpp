// Fill out your copyright notice in the Description page of Project Settings.

#include "Obstacle.h"
#include "BountyDash.h"
#include "BountyDashGameMode.h"
#include "ObstacleSpawner.h"
#include "PoolManager.h"

#include <EngineGlobals.h>
#include "Components/StaticMeshComponent.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	check(Collider);

	RootComponent = Collider;
	Collider->SetCollisionProfileName("OverlapAllDynamic");

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	check(Mesh);

	Mesh->AttachTo(RootComponent);
	Mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	killPoint = -20000.0f;

	OnActorBeginOverlap.AddDynamic(this, &AObstacle::CustomOnActorOverlap);
	OnActorEndOverlap.AddDynamic(this, &AObstacle::CustomOnActorEndOverlap);
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();

	if (OnActorBeginOverlap.GetAllObjects().Num() == 0)
	{
		OnActorBeginOverlap.AddDynamic(this, &AObstacle::CustomOnActorOverlap);
		OnActorEndOverlap.AddDynamic(this, &AObstacle::CustomOnActorEndOverlap);
	}
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ABountyDashGameMode* gameMode = GetCustomGameMode<ABountyDashGameMode>(GetWorld());
	float gameSpeed = gameMode->GetInvGameSpeed();

	AddActorWorldOffset(FVector(gameSpeed, 0.0f, 0.0f));

	if (GetActorLocation().X < killPoint)
	{
		APoolManager::Get()->Despawn(this);
	}
}

void AObstacle::SetKillPoint(float point)
{
	killPoint = point;
}

float AObstacle::GetKillPoint()
{
	return killPoint;
}
//
//void AObstacle::CustomOnActorOverlap_Implementation(AActor* OverlappedActor, AActor* otherActor)
//{
//
//}
//
//void AObstacle::CustomOnActorEndOverlap_Implementation(AActor* OverlappedActor, AActor* otherActor)
//{
//
//}

void AObstacle::CustomOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)
{

}

void AObstacle::CustomOnActorEndOverlap(AActor* OverlappedActor, AActor* otherActor)
{

}