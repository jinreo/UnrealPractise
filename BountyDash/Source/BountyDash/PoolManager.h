// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolManager.generated.h"

UCLASS()
class BOUNTYDASH_API APoolManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APoolManager();

	static APoolManager* Get();

	void Despawn(AActor* actor);

	AActor* Spawn(UWorld* world, UClass* uclass, const FTransform &transform);

	template< class T >
	T* Spawn(UWorld* world, UClass* Class, FTransform const& Transform)
	{
		return CastChecked<T>(Spawn(world, Class, Transform), ECastCheckedType::NullAllowed);
	}

private:
	static APoolManager* instance;

	TMap<FString, TQueue<AActor*>*> waitActorMap;
	
	AActor* CreateActor(UWorld* world, UClass* uclass, const FTransform &transform);
};
