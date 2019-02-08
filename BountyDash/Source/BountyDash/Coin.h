// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BountyDashObject.h" 
#include "Coin.generated.h"

UCLASS()
class BOUNTYDASH_API ACoin : public ABountyDashObject
{
	GENERATED_BODY()

	ACoin();


public:
	bool BeingPulled;

	// 게임이 시작되거나 스폰되었을 때 호출됨 
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* Mesh;

	// 매 프레임 호출됨
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	void MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor);
};