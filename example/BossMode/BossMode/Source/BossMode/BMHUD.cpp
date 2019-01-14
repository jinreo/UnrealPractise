// Fill out your copyright notice in the Description page of Project Settings.

#include "BMHUD.h"

#include "ConstructorHelpers.h"
#include "Engine/Canvas.h"

ABMHUD::ABMHUD()
{
	// 크로스헤어 텍스쳐 설정
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshiarTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTex = CrosshiarTexObj.Object;
}

void ABMHUD::DrawHUD()
{
	Super::DrawHUD();
	// 캔버스 중앙을 찾는다 
	const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

	// 캔버스의 중앙이 텍스쳐 중심과 정렬되도록 텍스쳐 크기의 반만큼 오프셋 조절
	const FVector2D CrosshairDrawPosition((Center.X - (CrosshairTex->GetSurfaceWidth() * 0.5)), (Center.Y - (CrosshairTex->GetSurfaceHeight() * 0.5f)));

	// 크로스헤어를 그린다
	FCanvasTileItem TileItem(CrosshairDrawPosition, CrosshairTex->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem(TileItem);
}