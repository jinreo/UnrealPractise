// Fill out your copyright notice in the Description page of Project Settings.

#include "HelloSphere.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/Material.h"
#include "ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/TextRenderComponent.h"

// Sets default values
AHelloSphere::AHelloSphere()
{
	// 이 액터가 Tick()을 매 프레임마다 부르도록 한다. 
	// 필요 없다면 성능 향상을 위해 끌 수도 있다.
	PrimaryActorTick.bCanEverTick = true;

	// 루트 컴포넌트는 겹침과 충돌을 알려주는 구체 컴포넌트가 될 것이다.
	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = SphereComponent;

	// 구체 컴포넌트에 속성을 적용한다.
	SphereComponent->InitSphereRadius(220.0f);
	SphereComponent->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	// 구체 메시를 생성하고 연결한다
	UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	SphereVisual->AttachTo(RootComponent);

	// ConstructorHelpers를 통해 메시에 스태틱 메시 적용하기
	ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	ConstructorHelpers::FObjectFinder<UMaterial> SphereMaterial(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel"));

	// 메시가 성공적으로 생성되었다면 메시 속성 조절 
	if (SphereVisualAsset.Succeeded() && SphereMaterial.Succeeded())
	{
		SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
		SphereVisual->SetMaterial(0, SphereMaterial.Object);
		SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
	}

	// 파이어 파티클 시스템 생성하기
	UParticleSystemComponent* FireParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles"));

	FireParticles->AttachTo(SphereVisual);
	FireParticles->bAutoActivate = true;

	// 컴포넌트에 파이어 파티클 시스템 적용하기
	ConstructorHelpers::FObjectFinder<UParticleSystem> FireVisual(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));

	if (FireVisual.Succeeded())
	{
		FireParticles->SetTemplate(FireVisual.Object);
	}

	// 텍스트 렌더 컴포넌트 초기화
	TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));

	TextRenderComponent->AttachTo(SphereVisual);
	TextRenderComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 110.0f));
	TextRenderComponent->SetHorizontalAlignment(EHTA_Center);
	TextRenderComponent->SetYScale(2.0f);
	TextRenderComponent->SetXScale(2.0f);
	TextRenderComponent->SetVisibility(true);
	TextRenderComponent->SetText(NSLOCTEXT("AnyNs", "Any", "HelloWorld"));

	// 델리게이트 바인드
	OnActorBeginOverlap.AddDynamic(this, &AHelloSphere::MyOnBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AHelloSphere::MyOnEndOverlap);
}

// 게임이 시작되거나 스폰되었을 때 호출됨  
void AHelloSphere::BeginPlay()
{
	Super::BeginPlay();
	
}

// 매 프레임 호출됨
void AHelloSphere::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void AHelloSphere::MyOnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	FString outputString;
	outputString = "Hello " + OtherActor->GetName() + "!";
	TextRenderComponent->SetText(FText::FromString(outputString));
}

void AHelloSphere::MyOnEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	TextRenderComponent->SetText(NSLOCTEXT("AnyNs", "Any", "HelloWorld"));
}

