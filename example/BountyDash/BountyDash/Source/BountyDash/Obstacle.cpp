// Fill out your copyright notice in the Description page of Project Settings.

#include "Obstacle.h"

#include "Components/StaticMeshComponent.h"

// 기본 값 설정
AObstacle::AObstacle()
{
	// 이 액터가 Tick()을 매 프레임마다 부르도록 한다. 필요없다면 성능 향상을 위해 끌 수도 있다.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UDestructibleComponent>(TEXT("Mesh"));
	check(Mesh);

	Mesh->AttachTo(Collider);
	Mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
}

UDestructibleComponent* AObstacle::GetDestructable()
{
	return Mesh;
}