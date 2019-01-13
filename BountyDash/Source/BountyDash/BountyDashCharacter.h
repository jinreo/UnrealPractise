// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "GameFramework/Character.h"
#include "BountyDashCharacter.generated.h"

UCLASS()
class BOUNTYDASH_API ABountyDashCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnyWhere, Category = Logic)
		TArray<class ATargetPoint*> TargetArray;

	UPROPERTY(EditAnyWhere, Category = Logic)
		float CharSpeed;

	UPROPERTY(EditAnyWhere, Category = Sound)
		UAudioComponent* hitObstacleSound;

	UPROPERTY(EditAnyWhere, Category = Sound)
		UAudioComponent* dingSound;

	// Sets default values for this character's properties
	ABountyDashCharacter();

	void ScoreUp();

protected:

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Camera)
		class USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Camera)
		class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintReadOnly)
		int32 Scroe;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveRight();
	void MoveLeft();

	UFUNCTION()
	void MyOnComponentOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult&SweepResult);

	UFUNCTION()
	void MyOnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
	bool bBeingPushed;
	short CurrentLocation;
	FVector DesiredLocation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
