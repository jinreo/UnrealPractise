// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BountyDashGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BOUNTYDASH_API ABountyDashGameMode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY()
	float gameSpeed;

	UPROPERTY()
	int32 gameLevel;

public:
	ABountyDashGameMode();

	void CharScoreUp(unsigned int charScore);

	UFUNCTION()
	float GetInvGameSpeed();

	UFUNCTION()
	float GetGameSpeed();

	UFUNCTION()
	int32 GetGameLevel();

	void ReduceGameSpeed();

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 numCoinsForSpeedIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gameSpeedIncrease;
};
