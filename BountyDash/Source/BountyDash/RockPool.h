// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RockPool.generated.h"

UCLASS()
class BOUNTYDASH_API ARockPool : public AActor
{
	GENERATED_BODY()

public:	
	AActor* Spawn(UClass* uclass, const FTransform &transform);	

	void Despawn(AActor* actor);

	void DespawnAll();


private:
	TDoubleLinkedList<AActor*> waitList;
	TDoubleLinkedList<AActor*> spawnList;

};
