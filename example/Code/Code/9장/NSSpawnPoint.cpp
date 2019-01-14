// Fill out your copyright notice in the Description page of Project Settings.

#include "NSSpawnPoint.h"


ANSSpawnPoint::ANSSpawnPoint()
{
	// 이 액터가 Tick()을 매 프레임마다 부르도록 한다. 필요없다면 성능 향상을 위해 끌 수도 있다.
	PrimaryActorTick.bCanEverTick = true;

	SpawnCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	SpawnCapsule->SetCollisionProfileName("OverlapAllDynamic");
	SpawnCapsule->bGenerateOverlapEvents = true;
	SpawnCapsule->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECollisionResponse::ECR_Overlap);

	OnActorBeginOverlap.AddDynamic(this, &ANSSpawnPoint::ActorBeginOverlaps);
	OnActorEndOverlap.AddDynamic(this, &ANSSpawnPoint::ActorEndOverlaps);
}

void ANSSpawnPoint::OnConstruction(const FTransform& Transform)
{
	if (Team == ETeam::RED_TEAM)
	{
		SpawnCapsule->ShapeColor = FColor(255, 0, 0);
	}
	else // (Team == ETeam::BLUE_TEAM) 
	{
		SpawnCapsule->ShapeColor = FColor(0, 0, 255);
	}
}

// 매 프레임 호출됨
void ANSSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SpawnCapsule->UpdateOverlaps();
}

void ANSSpawnPoint::ActorBeginOverlaps(AActor* OverlappedActor, AActor* OtherActor)
{
	if (ROLE_Authority == Role)
	{
		if (OverlappingActors.Find(OtherActor) == INDEX_NONE)
		{
			OverlappingActors.Add(OtherActor);
		}
	}
}

void ANSSpawnPoint::ActorEndOverlaps(AActor* OverlappedActor, AActor* OtherActor)
{
	if (ROLE_Authority == Role)
	{
		if (OverlappingActors.Find(OtherActor) != INDEX_NONE)
		{
			OverlappingActors.Remove(OtherActor);
		}
	}
}