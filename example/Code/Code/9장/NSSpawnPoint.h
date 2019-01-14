// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NSGameMode.h"
#include "Components/CapsuleComponent.h"
#include "NSSpawnPoint.generated.h"

UCLASS()
class NS_API ANSSpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:
	// 이 액터의 속성 기본값을 설정함
	ANSSpawnPoint();

	// 매 프레임 호출됨
	virtual void Tick(float DeltaSeconds) override;

	virtual void OnConstruction(const FTransform& Transform) override;

	UFUNCTION()
		void ActorBeginOverlaps(AActor* OverlappedActor ,AActor* OtherActor);

	UFUNCTION()
		void ActorEndOverlaps(AActor* OverlappedActor, AActor* OtherActor);

	bool GetBlocked()
	{
		return OverlappingActors.Num() != 0;
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		ETeam Team;

private:
	UCapsuleComponent * SpawnCapsule;
	TArray<class AActor*> OverlappingActors;
};
