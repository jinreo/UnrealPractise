// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BMBossCharacter.h"
#include "BMCharacter.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h" 
#include "BMAIController.generated.h"

UENUM(BlueprintType)
enum class EBossState : uint8
{
	BS_FOLLOW = 0 UMETA(DisplayName = "Follow"),
	BS_TURRET = 1 UMETA(DisplayName = "Turret"),
	BS_FINAL = 2 UMETA(DisplayName = "Final")
};

UCLASS()
class BOSSMODE_API ABMAIController : public AAIController
{
	GENERATED_BODY()

public:
	ABMAIController();
	virtual void Possess(APawn* InPawn) override;

	UBlackboardComponent* GetBlackboard();

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = Behaviour)
		void TrackToTarget();

	UFUNCTION(BlueprintCallable, Category = Behaviour)
		void StopTrack();

	UFUNCTION(BlueprintCallable, Category = Behaviour)
		void FireMissles();

protected:
	UPROPERTY(BlueprintReadWrite, Category = Behavior)
		class UBlackboardComponent* BlackboardComp;

	UPROPERTY(BlueprintReadWrite, Category = Behavior)
		class UBehaviorTreeComponent* BehaviorTreeComp;

private:
	class ABMBossCharacter* ControlledChar;
	FBlackboard::FKey BossStateBlackboardKey;

	FBlackboard::FKey TargetBlackboardKey;
	class ABMCharacter* Target;
	bool bIsTracking;
};