// Fill out your copyright notice in the Description page of Project Settings.

#include "BMAgroCheck.h"

#include "BossMode.h" 
#include "BMAIController.h" 
#include "BehaviorTree/BlackboardComponent.h" 
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h" 
#include "BehaviorTree/BehaviorTree.h" 
#include "BMBossCharacter.h" 
#include "DrawDebugHelpers.h" 



void UBMAgroCheck::TickNode(UBehaviorTreeComponent&OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	if (ThisTree == nullptr || ThisController == nullptr || ThisAICharacter == nullptr)
	{
		ThisTree = OwnerComp.GetCurrentTree();
		ThisController = Cast<ABMAIController>(OwnerComp.GetAIOwner());
		ThisAICharacter = Cast<ABMBossCharacter>(ThisController->GetPawn());

		if (ThisTree == nullptr || ThisController == nullptr || ThisAICharacter == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Warning Agro Service performed on invalid AI"));
			return;
		}
	}

	// trace complex를 참으로 설정하면서 sweep params 구조체를 초기화하기
	FCollisionQueryParams SphereSweepParams(FName(TEXT("AgroCheckSweep")), true, ThisAICharacter);

	FCollisionObjectQueryParams ObjectQuery(ECC_GameTraceChannel1);

	// Hit Result 초기화하기
	FHitResult HitOut(ForceInit);

	// 올바른 영역을 스윕하는지 확인하기 위해서 디버그 구체를 그린다
	DrawDebugSphere(ThisAICharacter->GetWorld(), ThisAICharacter->GetActorLocation(), 1500, 12, FColor::Red, false, 4.0f);

	// 스윕을 수행하고 boolean 리턴을 체크한다. BMCharacter 오브젝트에 대해서만 체크한다.
	bool bResult = ThisAICharacter->GetWorld()->SweepSingleByObjectType(HitOut,
		ThisAICharacter->GetActorLocation(),
		ThisAICharacter->GetActorLocation() + FVector(0.0f, 0.0f, 10.0f),
		FQuat(),
		ObjectQuery,
		FCollisionShape::MakeSphere(1500),
		SphereSweepParams);

	if (bResult)
	{
		ThisController->GetBlackboard()->SetValueAsObject(TEXT("TargetToFollow"), HitOut.GetActor());
		ThisController->GetBlackboard()->SetValueAsVector(TEXT("HomeLocation"), ThisAICharacter->GetActorLocation());
		ThisController->GetBlackboard()->SetValueAsVector(TEXT("TargetLocation"), HitOut.GetActor()->GetActorLocation());
	}
	else
	{
		ThisController->GetBlackboard()->SetValueAsObject(TEXT("TargetToFollow"), nullptr);
	}

} // <-- TickNode() 닫기

