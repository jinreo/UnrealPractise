// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DestructibleComponent.h"
#include "DestroyedFloorPiece.generated.h"

UCLASS()
class BOUNTYDASH_API ADestroyedFloorPiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADestroyedFloorPiece();

	void Death();

	UPROPERTY()
		UDestructibleComponent* Destructable;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
