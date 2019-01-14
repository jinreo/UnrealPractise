// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BMAIController.generated.h"

/**
 * 
 */
UCLASS()
class BOSSMODE_API ABMAIController : public AAIController
{
	GENERATED_BODY()

public:
	ABMAIController();
	virtual void Possess(APawn* InPawn) override;

	UBlackboardComponent* GetBlackboard();

protected:
	UPROPERTY(BlueprintReadWrite, Category = Behavior)
		class UBlackboardComponent* BlackboardComp;

	UPROPERTY(BlueprintReadWrite, Category = Behavior)
		class UBehaviorTreeComponent* BehaviorTreeComp;
};