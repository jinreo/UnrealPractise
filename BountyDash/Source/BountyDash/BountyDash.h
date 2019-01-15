// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

template<typename T>

T* GetCustomGameMode(UWorld* worldContext)
{
	return Cast<T>(worldContext->GetAuthGameMode());
}

//General Log
DECLARE_LOG_CATEGORY_EXTERN(LogMyGame, Log, All);

//Logging during game startup
DECLARE_LOG_CATEGORY_EXTERN(LogMyGameInit, Log, All);

//Logging for your AI system
DECLARE_LOG_CATEGORY_EXTERN(LogMyGameAI, Log, All);

//Logging for a that troublesome system
DECLARE_LOG_CATEGORY_EXTERN(LogMyGameSomeSystem, Log, All);

//Logging for Critical Errors that must always be addressed
DECLARE_LOG_CATEGORY_EXTERN(LogMyGameCriticalErrors, Log, All);