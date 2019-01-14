// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PowerUpObject.h"
#include "Components/AudioComponent.h"
#include "BountyDashCharacter.generated.h"

UCLASS()
class BOUNTYDASH_API ABountyDashCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// 캐릭터의 속성 기본 값 설정
	ABountyDashCharacter();

protected:
	// 게임이 시작되거나 스폰되었을 때 호출됨  
	virtual void BeginPlay() override;

public:
	// 매 프레임 호출됨 
	virtual void Tick(float DeltaSeconds) override;

	// 입력하는 기능을 바인드하기 위해 호출
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	//함수
public:
	void ScoreUp();
	void PowerUp(EPowerUp Type);
	int GetScore();

protected:
	// 플레이어 좌우의 타겟 위치 이동을 조정한다 
	void MoveRight();
	void MoveLeft();

	// 컴포넌트 콜리전 캡슐에 사용되는 오버랩 함수 
	UFUNCTION()
	void MyOnComponentOverlap(class UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void MyOnComponentEndOverlap(class UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void StopSmash();
	UFUNCTION()
	void StopMagnet();

	UFUNCTION()
		void Reset();

	//변수
public:
	// 이동 방향 배열
	UPROPERTY(EditAnywhere, Category = Logic)
	TArray<class ATargetPoint*> TargetArray;

	// 캐릭터 줄 바꿈 속도 
	UPROPERTY(EditAnywhere, Category = Logic)
	float CharSpeed;

	// 충돌 사운드를 위한 오디오 컴포넌트
	UPROPERTY(EditAnywhere, Category = Sound)
	UAudioComponent* hitObstacleSound;

	// 코인 획득 사운드를 위한 오디오 컴포넌트
	UPROPERTY(EditAnywhere, Category = Sound)
	UAudioComponent* dingSound;
	
protected:
	// 플레이어와 카메라간의 거리를 유지하기 위한 카메라 붐 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class USpringArmComponent* CameraBoom;

	// 타겟 뷰로 사용할 카메라 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* FollowCamera;

	// 플레이어 점수 
	UPROPERTY(BlueprintReadOnly)
	int32 Score;

	// Smash 시간
	UPROPERTY(EditAnywhere, Category = PowerUps)
		float SmashTime;

	// Magnet 시간
	UPROPERTY(EditAnywhere, Category = PowerUps)
		float MagnetTime;

	UPROPERTY(EditAnywhere, Category = PowerUps)
		float MagnetReach;

	// 파워업 함수
	void CoinMagnet();

	// 킬 포인트
	float Killpoint;

private:
	// 캐릭터 선 위치 데이터 
	short CurrentLocation;
	FVector DesiredLocation;
	bool bBeingPushed;

	// 파워업 속성
	bool CanSmash;
	bool CanMagnet;

};