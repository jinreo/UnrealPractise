// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"

#include "RockPool.h"

#include "Obstacle.generated.h"

UCLASS()
class BOUNTYDASH_API AObstacle : public AActor
{
	GENERATED_BODY()

	float KillPoint;

public:	
	// Sets default values for this actor's properties
	AObstacle();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetPool(ARockPool* pool);
	void SetKillPoint(float point);
	float GetKillPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UFUNCTION()
	virtual void CustomOnActorOverlap(AActor* OverlappedActor, AActor* otherActor);

	UFUNCTION()
	virtual void CustomOnActorEndOverlap(AActor* OverlappedActor, AActor* otherActor);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* Collider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

	ARockPool* pooler;
};
