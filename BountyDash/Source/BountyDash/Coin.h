// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstacle.h"
#include "RockPool.h"
#include "Coin.generated.h"

/**
 * 
 */
UCLASS()
class BOUNTYDASH_API ACoin : public AObstacle
{
	GENERATED_BODY()

	ACoin();

	virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintNativeEvent)
	UFUNCTION()
	void CustomOnActorOverlap(AActor* OverlappedActor, AActor* otherActor) override;
	//void CustomOnActorOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor) override;
};
