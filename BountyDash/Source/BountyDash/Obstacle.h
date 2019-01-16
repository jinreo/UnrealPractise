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
		
public:	
	// Sets default values for this actor's properties
	AObstacle();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	void SetPool(ARockPool* pool);

	void SetKillPoint(float point);

	float GetKillPoint();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* Collider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

	ARockPool* pooler;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void CustomOnActorOverlap(AActor* OverlappedActor, AActor* otherActor);
	void CustomOnActorOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor);

	// 오버랩 종료 수행
	UFUNCTION(BlueprintNativeEvent)
	void CustomOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
	void CustomOnActorEndOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor);


private:
	float killPoint;
};
