// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PowerUpPlugin.h"

// 모듈의 private 헤더 파일을 여기에 include해야 한다. 
// 모듈의 소스 파일의 대부분이 사용하는 헤더를 포함시키자

#include "CoreUObject.h" 

#define LOCTEXT_NAMESPACE "FPowerUpPluginModule"

void FPowerUpPluginModule::StartupModule()
{
}

void FPowerUpPluginModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPowerUpPluginModule, PowerUpPlugin)