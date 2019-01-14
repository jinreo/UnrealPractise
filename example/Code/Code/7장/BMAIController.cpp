// Fill out your copyright notice in the Description page of Project Settings.

#include "BMAIController.h"

#include "BMBossCharacter.h" 
#include "BehaviorTree/BlackboardComponent.h" 
#include "BehaviorTree/BehaviorTree.h" 

ABMAIController::ABMAIController()
{
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
	check(BlackboardComp);

	BehaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComp"));
	check(BehaviorTreeComp);
}

void ABMAIController::Possess(APawn* InPawn)
{
	Super::Possess(InPawn);

	ABMBossCharacter* possessedPawn = Cast<ABMBossCharacter>(InPawn);
	if (InPawn != nullptr)
	{
		BlackboardComp->InitializeBlackboard(*(possessedPawn->BehaviorTree->BlackboardAsset));
		BehaviorTreeComp->StartTree(*(possessedPawn->BehaviorTree));

	}//<-- if (InPawn != nullptr) ´Ý±â
}//<--ABMAIController::Possess() ´Ý±â

UBlackboardComponent* ABMAIController::GetBlackboard()
{
	return BlackboardComp;
}