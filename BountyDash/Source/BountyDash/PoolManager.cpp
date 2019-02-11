// Fill out your copyright notice in the Description page of Project Settings.

#include "PoolManager.h"

#include "Runtime/Engine/Public/EngineUtils.h" 
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

// Sets default values
APoolManager::APoolManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

APoolManager* APoolManager::instance(NULL);

APoolManager* APoolManager::Get()
{
	if (!instance) 
	{
		instance = NewObject<APoolManager>();
		
		UE_LOG(LogTemp, Warning, TEXT("Create instance"));
	}

	return instance;
}

AActor* APoolManager::Spawn(UWorld* world, UClass* uclass, const FTransform &transform)
{
	FString name = uclass->GetName();
	AActor* actor = NULL;

	UE_LOG(LogTemp, Warning, TEXT("%s"), *name);
	if (waitActorMap.Num() != 0 && waitActorMap.Contains(name))
	{
		TQueue<AActor*>* waitQueue = waitActorMap[name];
		if (waitQueue->IsEmpty() == false)
		{
			waitQueue->Dequeue(actor);
			actor->SetActorLocation(transform.GetLocation());
		}
		else
		{
			actor = CreateActor(world, uclass, transform);
		}
	}
	else
	{
		FActorSpawnParameters SpawnInfo;
		actor = CreateActor(world, uclass, transform);
	}
	
	actor->SetActorHiddenInGame(false);
	actor->SetActorEnableCollision(true);
	actor->SetActorTickEnabled(true);

	return actor;
}

void APoolManager::Despawn(AActor* actor)
{
	FString name = actor->GetClass()->GetName();

	TQueue<AActor*>* waitQueue = nullptr;
	if (waitActorMap.Contains(name) == false)
	{
		waitQueue = new TQueue<AActor*>();
		waitActorMap.Add(name, waitQueue);
	}
	else
	{
		waitQueue = waitActorMap[name];
	}

	waitQueue->Enqueue(actor);

	actor->SetActorHiddenInGame(true);
	actor->SetActorEnableCollision(false);
	actor->SetActorTickEnabled(false);
}

AActor* APoolManager::CreateActor(UWorld* world, UClass* uclass, const FTransform &transform)
{
	UE_LOG(LogTemp, Warning, TEXT("CreateActor"));
	FActorSpawnParameters SpawnInfo;
	return world->SpawnActor<AActor>(uclass, transform, SpawnInfo);
}