// Fill out your copyright notice in the Description page of Project Settings.

#include "Coin.h"
#include "Obstacle.h"
#include "BountyDash.h"
#include "PoolManager.h"
#include "BountyDashCharacter.h"
#include "BountyDashGameMode.h"
#include "Components/StaticMeshComponent.h"

ACoin::ACoin()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	check(Mesh);
	Mesh->AttachTo(RootComponent);
	Mesh->SetCollisionProfileName("OverlapAllDynamic");

	OnActorBeginOverlap.AddDynamic(this, &ACoin::MyOnActorOverlap);
}

// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();

	if (OnActorBeginOverlap.GetAllObjects().Num() == 0)
	{
		OnActorBeginOverlap.AddDynamic(this, &ACoin::MyOnActorOverlap);
	}
}


void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mesh->AddLocalRotation(FRotator(5.0f, 0.0f, 0.0f));
}

void ACoin::MyOnActorOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor->GetClass()->IsChildOf(AObstacle::StaticClass()) && !BeingPulled)
	{
		USphereComponent* thisSphere = Cast<USphereComponent>(GetComponentByClass(USphereComponent::StaticClass()));
		USphereComponent* otherSphere = Cast<USphereComponent>(OtherActor->GetComponentByClass(USphereComponent::StaticClass()));

		if (otherSphere)
		{
			AddActorLocalOffset(FVector(0.0f, 0.0f, (otherSphere->GetUnscaledSphereRadius() * 2.0f) + Collider->GetUnscaledSphereRadius()));
		}
	}
	if (OtherActor->GetClass()->IsChildOf(ABountyDashCharacter::StaticClass()))
	{
		ABountyDashCharacter* character = Cast< ABountyDashCharacter>(OtherActor);
		character->ScoreUp();

		APoolManager::Get()->Despawn(this);
	}
}