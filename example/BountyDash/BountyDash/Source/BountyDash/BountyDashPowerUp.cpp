// Fill out your copyright notice in the Description page of Project Settings.

#include "BountyDashPowerUp.h"
#include "PowerUpObject.h"
#include "Obstacle.h"
#include "BountyDashCharacter.h"

#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

// 기본 값 설정
ABountyDashPowerUp::ABountyDashPowerUp()
{
	// 이 액터가 Tick()을 매 프레임마다 부르도록 한다. 필요없다면 성능 향상을 위해 끌 수도 있다.
	PrimaryActorTick.bCanEverTick = true;

	PowerUp = CreateDefaultSubobject<UPowerUpObject>(TEXT("PowerUp"));
	check(PowerUp);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	check(Mesh);

	Mesh->AttachTo(RootComponent);
	Mesh->SetCollisionProfileName("OverlapAllDynamic");


	FString AssetName;
	switch (PowerUp->GetType())
	{
	case EPowerUp::SPEED:
		AssetName = "/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid";
		break;

	case EPowerUp::SMASH:
		AssetName = "/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule";
		break;

	case EPowerUp::MAGNET:
		AssetName = "/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180";
		break;

	default:
		break;
	}

	ConstructorHelpers::FObjectFinder<UStaticMesh> myMesh(&AssetName.GetCharArray()[0]);

	if (myMesh.Succeeded())
	{
		Mesh->SetStaticMesh(myMesh.Object);
	}
} // <- ABountyDashPowerUp::ABountyDashPowerUp() 닫기


void ABountyDashPowerUp::MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)
{

}