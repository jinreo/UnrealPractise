// Fill out your copyright notice in the Description page of Project Settings.

#include "BountyDashObject.h"
#include "BountyDash.h"
#include "BountyDashGameMode.h"

ABountyDashObject::ABountyDashObject()
{
	// 이 액터가 Tick()을 매 프레임마다 부르도록 한다. 필요없다면 성능 향상을 위해 끌 수도 있다.
	PrimaryActorTick.bCanEverTick = true;
	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	check(Collider);

	RootComponent = Collider;
	Collider->SetCollisionProfileName("OverlapAllDynamic");

	OnActorBeginOverlap.AddDynamic(this, &ABountyDashObject::MyOnActorOverlap);
	OnActorBeginOverlap.AddDynamic(this, &ABountyDashObject::MyOnActorEndOverlap);
}

// 게임이 시작되거나 스폰되었을 때 호출됨 
void ABountyDashObject::BeginPlay()
{
	Super::BeginPlay();
}

// 매 프레임 호출됨
void ABountyDashObject::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	float gameSpeed = GetCustomGameMode<ABountyDashGameMode>(GetWorld())->GetInvGameSpeed();

	AddActorWorldOffset(FVector(gameSpeed, 0.0f, 0.0f));

	if (GetActorLocation().X < KillPoint)
	{
		Destroy();
	}
}

void ABountyDashObject::MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)
{
}

void ABountyDashObject::MyOnActorEndOverlap(AActor* OverlappedActor, AActor* otherActor)
{
}

void ABountyDashObject::SetKillPoint(float point)
{
	KillPoint = point;
}

float ABountyDashObject::GetKillPoint()
{
	return KillPoint;
}