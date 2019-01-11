// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HybridSphere.generated.h"

UCLASS()
class HELLOCODE_API AHybridSphere : public AActor
{
	GENERATED_BODY()

public:
	// 이 액터의 속성 기본값을 설정함
	AHybridSphere();

	// 게임이 시작되거나 스폰되었을 때 호출됨 
	virtual void BeginPlay() override;

	// 매 프레임 호출됨
	virtual void Tick(float DeltaSeconds) override;

	// 오버랩 수행
	UFUNCTION(BlueprintNativeEvent)
		void MyOnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

	void MyOnBeginOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor);

	// 오버랩 종료 수행
	UFUNCTION(BlueprintNativeEvent)
		void MyOnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	void MyOnEndOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor);

protected:
	UPROPERTY(Category = "Components", EditAnywhere)
		class USphereComponent* Sphere;

	UPROPERTY(Category = "Components", EditAnywhere)
		class UStaticMeshComponent* Mesh;

	UPROPERTY(Category = "Components", EditAnywhere, BlueprintReadOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(Category = "Components", EditAnywhere)
		class UParticleSystemComponent* Particles;
};
