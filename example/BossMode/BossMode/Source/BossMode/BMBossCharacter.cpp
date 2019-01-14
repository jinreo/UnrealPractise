// Fill out your copyright notice in the Description page of Project Settings.

#include "BMBossCharacter.h"

#include "GameFramework/PawnMovementComponent.h"

// 기본 값 설정
ABMBossCharacter::ABMBossCharacter()
{
	// 이 캐릭터가 Tick()을 매 프레임마다 부르도록 한다. 필요없다면 성능 향상을 위해 끌 수도 있다.
	PrimaryActorTick.bCanEverTick = true;

	Health = 100.0f;

	GetMovementComponent()->NavAgentProps.AgentHeight = 320.0f;
	GetMovementComponent()->NavAgentProps.AgentRadius = 160.0f;
}

float ABMBossCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	Health -= Damage;
	return Damage;
}

const float ABMBossCharacter::GetHealth()
{
	return Health;
}