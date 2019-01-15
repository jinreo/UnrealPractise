// Fill out your copyright notice in the Description page of Project Settings.

#include "BountyDash.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, BountyDash, "BountyDash" );

//General Log
DEFINE_LOG_CATEGORY(LogMyGame);

//Logging during game startup
DEFINE_LOG_CATEGORY(LogMyGameInit);

//Logging for your AI system
DEFINE_LOG_CATEGORY(LogMyGameAI);

//Logging for some system
DEFINE_LOG_CATEGORY(LogMyGameSomeSystem);

//Logging for Critical Errors that must always be addressed
DEFINE_LOG_CATEGORY(LogMyGameCriticalErrors);