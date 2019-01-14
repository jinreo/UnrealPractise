// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

class FPowerUpPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface ±¸Çö */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};