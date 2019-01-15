// Fill out your copyright notice in the Description page of Project Settings.

#include "RockPool.h"

#include "Runtime/Engine/Public/EngineUtils.h" 
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

ARockPool::ARockPool()
{
}

ARockPool::~ARockPool()
{
	DespawnAll();
}

AActor* ARockPool::Spawn(UClass* uclass, const FTransform &transform)
{
	AActor* actor = NULL;
	if (waitList.Num() == 0)
	{
		FActorSpawnParameters SpawnInfo;
		actor = GetWorld()->SpawnActor<AActor>(uclass, transform, SpawnInfo);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Create Actor")));

		spawnList.AddTail(actor);
	}
	else
	{
		actor = waitList.GetHead()->GetValue();
		actor->SetActorRelativeLocation(transform.GetLocation());

		waitList.RemoveNode(actor);
		spawnList.AddTail(actor);
	}

	actor->SetActorHiddenInGame(false);
	actor->SetActorEnableCollision(true);
	actor->SetActorTickEnabled(true);

	return actor;
}

void ARockPool::Despawn(AActor* actor)
{
	waitList.AddTail(actor);
	spawnList.RemoveNode(actor);

	actor->SetActorHiddenInGame(true);
	actor->SetActorEnableCollision(false);
	actor->SetActorTickEnabled(false);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Despawn Actor")));

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("spawnList Count : %d"), spawnList.Num()));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("waitList Count : %d"), waitList.Num()));	
}

void ARockPool::DespawnAll()
{
	if (spawnList.Num() > 0)
	{
		for (auto obj : spawnList)
		{
			obj->SetActorHiddenInGame(false);

			waitList.AddTail(obj);
		}

		spawnList.Empty();
	}
}