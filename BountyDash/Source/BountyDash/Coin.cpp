// Fill out your copyright notice in the Description page of Project Settings.

#include "Coin.h"
#include "BountyDash.h"
#include "PoolManager.h"
#include "BountyDashCharacter.h"
#include "BountyDashGameMode.h"
#include "Components/StaticMeshComponent.h"

ACoin::ACoin()
{

}

void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mesh->AddLocalRotation(FRotator(5.0f, 0.0f, 0.0f));
}

void ACoin::CustomOnActorOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor->GetClass()->IsChildOf(AObstacle::StaticClass()))
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

void ACoin::SetPool(ARockPool* pool)
{
	pooler = pool;
}