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
		
public:
	// 이 액터의 속성 기본값을 설정함
	ABountyDashObject();

	// 매 프레임 호출됨
	virtual void Tick(float DeltaSeconds) override;

	void SetKillPoint(float point);
	float GetKillPoint();

protected:

	UPROPERTY(EditAnywhere)
	USphereComponent* Collider;

	float KillPoint;
};
