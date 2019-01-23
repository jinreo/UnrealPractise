// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test.generated.h"

UCLASS()
class BOUNTYDASH_API ATest : public AActor
{
	GENERATED_BODY()

private:
	static ATest* MyCustomSingletonObj;

public:
	static ATest* GetMyCustomSingleton();
};
