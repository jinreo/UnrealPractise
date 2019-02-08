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


	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	check(Mesh);

	Mesh->AttachTo(Collider);
	Mesh->SetCollisionResponseToAllChannels(ECR_Ignore);


	OnActorBeginOverlap.AddDynamic(this, &AObstacle::MyOnActorOverlap);
	OnActorEndOverlap.AddDynamic(this, &AObstacle::MyOnActorEndOverlap);
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();

	if (OnActorBeginOverlap.GetAllObjects().Num() == 0)
	{
		OnActorBeginOverlap.AddDynamic(this, &AObstacle::MyOnActorOverlap);
		OnActorEndOverlap.AddDynamic(this, &AObstacle::MyOnActorEndOverlap);
	}
}


void AObstacle::MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)
{

}

void AObstacle::MyOnActorEndOverlap(AActor* OverlappedActor, AActor* otherActor)
{

}
