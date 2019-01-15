// Fill out your copyright notice in the Description page of Project Settings.

#include "Floor.h"

#include "BountyDash.h"
#include "BountyDashGameMode.h"

#include "ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
AFloor::AFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> myMesh(TEXT("/Game/Geometry/Meshes/Floor_Mesh_BountyDash.Floor_Mesh_BountyDash"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> myMat(TEXT("/Game/StarterContent/Materials/M_Concrete_Tiles.M_Concrete_Tiles"));

	if (myMesh.Succeeded())
	{
		NumRepeatingMesh = 3;

		UStaticMesh* staticMesh = myMesh.Object;
		FBoxSphereBounds myBounds = staticMesh->GetBounds();
		float XBounds = myBounds.BoxExtent.X * 2;
		float ScenePos = ((XBounds * (NumRepeatingMesh - 1)) / 2.0f) * -1;

		KillPoint = ScenePos - (XBounds * 0.5f);
		SpawnPoint = (ScenePos * -1) + (XBounds * 0.5f);

		for (int i = 0; i < NumRepeatingMesh; i++)
		{
			FString SceneName = "Scene" + FString::FromInt(i);
			FName SceneID = FName(*SceneName);
			USceneComponent* thisScene = CreateDefaultSubobject<USceneComponent>(SceneID);
			
			check(thisScene);

			thisScene->AttachTo(RootComponent);
			thisScene->SetRelativeLocation(FVector(ScenePos, 0.0f, 0.0f));

			ScenePos += XBounds;

			FloorMeshScenes.Add(thisScene);

			FString MeshName = "Mesh" + FString::FromInt(i);
			UStaticMeshComponent* thisMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName(*MeshName));
			check(thisMesh);

			thisMesh->AttachTo(FloorMeshScenes[i]);
			thisMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
			thisMesh->SetCollisionProfileName(TEXT("OverlapDynamic"));

			if (myMat.Succeeded())
			{
				thisMesh->SetStaticMesh(myMesh.Object);
				thisMesh->SetMaterial(0, myMat.Object);
			}

			FloorMeshes.Add(thisMesh);
		}


		CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
		check(CollisionBox);

		CollisionBox->AttachTo(RootComponent);
		CollisionBox->SetBoxExtent(FVector(SpawnPoint, myBounds.BoxExtent.Y, myBounds.BoxExtent.Z));
		CollisionBox->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	}
}


// Called every frame
void AFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (auto Scene : FloorMeshScenes)
	{
		Scene->AddLocalOffset(FVector(GetCustomGameMode<ABountyDashGameMode>(GetWorld())->GetInvGameSpeed(), 0.0f, 0.0f));

		if (Scene->GetComponentTransform().GetLocation().X <= KillPoint)
		{
			Scene->SetRelativeLocation(FVector(SpawnPoint, 0.0f, 0.0f));
		}
	}
}

float AFloor::GetKillPoint()
{
	return KillPoint;
}

float AFloor::GetSpawnPoint()
{
	return SpawnPoint;
}