// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BMHUD.generated.h"

/**
 * 
 */
UCLASS()
class BOSSMODE_API ABMHUD : public AHUD
{
	GENERATED_BODY()

public:
	ABMHUD();

	/** HUD의 기본 드로우 콜 */
	virtual void DrawHUD() override;

private:
	/** 크로스헤어 에셋 포인터 */
	class UTexture2D* CrosshairTex;
	
	
	
	
};
