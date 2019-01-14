// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BMBossCharacter.generated.h"

UCLASS()
class BOSSMODE_API ABMBossCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// 캐릭터의 속성 기본 값 설정
	ABMBossCharacter();

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = AI)
		const float GetHealth();

	UPROPERTY(EditAnywhere, Category = Pawn)
		class UBehaviorTree* BehaviorTree;

private:
	UPROPERTY()
		float Health;
};
