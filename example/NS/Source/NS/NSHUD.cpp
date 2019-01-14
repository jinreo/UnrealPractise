// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "NSHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"

#include "NSCharacter.h" 
#include "NSGameState.h" 
#include "NSGameMode.h" 
#include "NSPlayerState.h" 

#include "Kismet/GameplayStatics.h"

ANSHUD::ANSHUD()
{
	// 크로스헤어 텍스쳐 설정
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTex = CrosshairTexObj.Object;
}


void ANSHUD::DrawHUD()
{
	Super::DrawHUD();

	// 매우 간단한 크로스헤어를 그린다

	// 캔버스 중앙을 찾는다
	const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

	// 텍스쳐의 크기 반을 오프셋으로 하여 텍스쳐의 중앙이 캔버스 중앙에 오게 한다
	const FVector2D CrosshairDrawPosition( (Center.X),
										   (Center.Y + 20.0f));

	// 크로스헤어를 그린다
	FCanvasTileItem TileItem( CrosshairDrawPosition, CrosshairTex->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem( TileItem );

	ANSGameState* thisGameState = Cast<ANSGameState>(GetWorld()->GetGameState());

	if (thisGameState != nullptr && thisGameState->bInMenu)
	{
		int BlueScreenPos = 50;
		int RedScreenPos = Center.Y + 50;
		int nameSpacing = 25;
		int NumBlueteam = 1;
		int NumReadTeam = 1;

		FString thisString = "BLUE TEAM:";
		DrawText(thisString, FColor::Cyan, 50, BlueScreenPos);

		thisString = "RED TEAM:";
		DrawText(thisString, FColor::Red, 50, RedScreenPos);

		for (auto player : thisGameState->PlayerArray)
		{
			ANSPlayerState* thisPS = Cast<ANSPlayerState>(player);
			if (thisPS)
			{
				if (thisPS->Team == ETeam::BLUE_TEAM)
				{
					//thisString = FString::Printf(TEXT("%s"), &(thisPS->PlayerName[0]));
					//GetPlayerName
					thisString = FString::Printf(TEXT("%s"), *thisPS->GetPlayerName());
					DrawText(thisString, FColor::Cyan, 50, BlueScreenPos + nameSpacing * NumBlueteam);
					NumBlueteam++;
				}
				else
				{
					thisString = FString::Printf(TEXT("%s"), *thisPS->GetPlayerName());
					DrawText(thisString, FColor::Red, 50, RedScreenPos + nameSpacing * NumReadTeam);
					NumReadTeam++;
				}
			}
		}

		if (GetWorld()->GetAuthGameMode())
		{
			thisString = "Press R to start game";
			DrawText(thisString, FColor::Yellow, Center.X, Center.Y);
		}
		else
		{
			thisString = "Waiting on Server!!";
			DrawText(thisString, FColor::Yellow, Center.X, Center.Y);
		}
	}

	else
	{
		ANSCharacter* ThisChar = Cast<ANSCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
		if (ThisChar != nullptr)
		{
			if (ThisChar->GetNSPlayerState())
			{
				FString HUDString = FString::Printf(TEXT("Health: %f, Score: %.0f, Deaths: %d"), ThisChar->GetNSPlayerState()->Health, ThisChar->GetNSPlayerState()->Score, ThisChar->GetNSPlayerState()->Deaths);
				DrawText(HUDString, FColor::Yellow, 50, 50);
			}
		}
	}
}
