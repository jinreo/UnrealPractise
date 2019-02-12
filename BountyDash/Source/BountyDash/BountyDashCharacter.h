// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "GameFramework/Character.h"
#include "PowerUpObject.h"
#include "BountyDashCharacter.generated.h"

UCLASS()
class BOUNTYDASH_API ABountyDashCharacter : public ACharacter
{
	GENERATED_BODY()
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveRight();
	void MoveLeft();
	void CoinMagnet();

	UFUNCTION()
	void StopSmash();

	UFUNCTION()
	void StopMagnet();

	UFUNCTION()
	void MyOnComponentOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult&SweepResult);

	UFUNCTION()
	void MyOnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
public:
	ABountyDashCharacter();

	void PowerUp(EPowerUp Type);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ScoreUp();

	UPROPERTY(EditAnyWhere, Category = Logic)
		TArray<class ATargetPoint*> TargetArray;

	UPROPERTY(EditAnyWhere, Category = Logic)
		float CharSpeed;

	UPROPERTY(EditAnyWhere, Category = Sound)
		UAudioComponent* hitObstacleSound;

	UPROPERTY(EditAnyWhere, Category = Sound)
		UAudioComponent* dingSound;

public:
	bool BeingPulled;

protected:
	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Camera)
		class USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Camera)
		class UCameraComponent* FollowCam;

	UPROPERTY(BlueprintReadOnly)
		int32 Score;

	UPROPERTY(EditAnywhere, Category = PowerUps)
		float SmashTime;

	UPROPERTY(EditAnywhere, Category = PowerUps)
		float MagnetTime;

	UPROPERTY(EditAnywhere, Category = PowerUps)
		float MagnetReach;

private:
	bool bBeingPushed;
	bool CanSmash;
	bool CanMagnet;
	short CurrentLocation;
	FVector DesiredLocation;
};
