// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NSHUD.generated.h"

UCLASS()
class ANSHUD : public AHUD
{
	GENERATED_BODY()

public:
	ANSHUD();

	/** HUD를 위한 주 드로우 콜 */
	virtual void DrawHUD() override;

private:
	/** 크로스헤어 에셋 포인터 */
	class UTexture2D* CrosshairTex;

};

