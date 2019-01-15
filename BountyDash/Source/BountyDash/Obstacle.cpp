// Fill out your copyright notice in the Description page of Project Settings.

#include "Obstacle.h"
#include "BountyDash.h"
#include "BountyDashGameMode.h"
#include "ObstacleSpawner.h"
#include "RockPool.h"

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
	KillPoint = -20000.0f;

	OnActorBeginOverlap.AddDynamic(this, &AObstacle::CustomOnActorOverlap);
	OnActorEndOverlap.AddDynamic(this, &AObstacle::CustomOnActorEndOverlap);
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

	ABountyDashGameMode* gameMode = GetCustomGameMode<ABountyDashGameMode>(GetWorld());
	float gameSpeed = gameMode->GetInvGameSpeed();

	AddActorWorldOffset(FVector(gameSpeed, 0.0f, 0.0f));

	if (GetActorLocation().X < KillPoint)
	{
		pooler->Despawn(this);
	}
}

void AObstacle::CustomOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)
{

}

void AObstacle::CustomOnActorEndOverlap(AActor* OverlappedActor, AActor* otherActor)
{

}

void AObstacle::SetKillPoint(float point)
{
	KillPoint = point;
}

float AObstacle::GetKillPoint()
{
	return KillPoint;
}

void AObstacle::SetPool(ARockPool* pool)
{
	pooler = pool;
}