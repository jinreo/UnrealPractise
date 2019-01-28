// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "BountyDashObject.generated.h"

UCLASS()
class BOUNTYDASH_API ABountyDashObject : public AActor
{
	GENERATED_BODY()

	float KillPoint;

public:	
	// Sets default values for this actor's properties
	ABountyDashObject();
	
	void SetKillPoint(float point);
	float GetKillPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void CustomOnActorOverlap(AActor* OverlappedActor, AActor* otherActor);

	UFUNCTION()
	virtual void CustomOnActorOverlapEnd(AActor* OverlappedActor, AActor* otherActor);

	UPROPERTY(EditAnywhere)
	USphereComponent* Collider;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
