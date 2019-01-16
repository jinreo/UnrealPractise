// Fill out your copyright notice in the Description page of Project Settings.

#include "ObstacleSpawner.h"
#include "BountyDash.h" 
#include "BountyDashGameMode.h" 
#include "Engine/TargetPoint.h" 
#include "Floor.h" 
#include "Obstacle.h" 
//#include "RockPooler.h"

#include "Runtime/Engine/Public/EngineUtils.h"

// Sets default values
AObstacleSpawner::AObstacleSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	check(Scene);
	RootComponent = Scene;

	SpawnTimer = 1.5f;
}

// Called when the game starts or when spawned
void AObstacleSpawner::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<ATargetPoint> TargetIter(GetWorld()); TargetIter; ++TargetIter)
	{
		SpawnTargets.Add(*TargetIter);
	}
	for (TActorIterator<AFloor> FloorIter(GetWorld()); FloorIter; ++FloorIter)
	{
		if (FloorIter->GetWorld() == GetWorld())
		{
			killPoint = FloorIter->GetKillPoint();
			spawnPoint = FloorIter->GetSpawnPoint();
		}
	}
	timeSinceLastSpawn = SpawnTimer;
}

// Called every frame
void AObstacleSpawner::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	timeSinceLastSpawn += DeltaSeconds;

	float trueSpawnTime = SpawnTimer / (float)GetCustomGameMode <ABountyDashGameMode>(GetWorld())->GetGameLevel();

	if (timeSinceLastSpawn > trueSpawnTime)
	{
		timeSinceLastSpawn = 0.0f;
		SpawnObstacle();
	}

}

void AObstacleSpawner::SpawnObstacle()
{
	if (SpawnTargets.Num() > 0 && ObstaclesToSpawn.Num() > 0)
	{
		short spawner = FMath::Rand() % SpawnTargets.Num();
		short obstical = FMath::Rand() % ObstaclesToSpawn.Num();

		FActorSpawnParameters SpawnInfo;

		FTransform myTrans = SpawnTargets[spawner]->GetTransform();
		myTrans.SetLocation(FVector(spawnPoint, myTrans.GetLocation().Y, myTrans.GetLocation().Z));

		AActor* actor = RockPool->Spawn(ObstaclesToSpawn[obstical], myTrans);
		AObstacle* newObs = Cast<AObstacle>(actor);

		if (newObs)
		{
			newObs->SetKillPoint(killPoint);
			newObs->SetPool(RockPool);

			USphereComponent* obsSphere = Cast<USphereComponent>(newObs->GetComponentByClass(USphereComponent::StaticClass()));

			if (obsSphere)
			{
				newObs->AddActorLocalOffset(FVector(0.0f, 0.0f, obsSphere->GetUnscaledSphereRadius()));
			}
		}
	}
}