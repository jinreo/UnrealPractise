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
	// 이 액터의 속성 기본값을 설정함
	ABountyDashObject();

	// 게임이 시작되거나 스폰되었을 때 호출됨 
	virtual void BeginPlay() override;

	// 매 프레임 호출됨
	virtual void Tick(float DeltaSeconds) override;

	void SetKillPoint(float point);
	float GetKillPoint();

protected:
	UFUNCTION()
	virtual void MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor);

	UFUNCTION()
	virtual void MyOnActorEndOverlap(AActor* OverlappedActor, AActor* otherActor);

	UPROPERTY(EditAnywhere)
	USphereComponent* Collider;
};
