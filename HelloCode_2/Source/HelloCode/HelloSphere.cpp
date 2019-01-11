// Fill out your copyright notice in the Description page of Project Settings.

#include "HelloSphere.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "ConstructorHelpers.h"

// Sets default values
AHelloSphere::AHelloSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 루트 컴포넌트는 겹침과 충돌을 알려주는 구체 컴포넌트가 될 것이다.
	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = SphereComponent;

	SphereComponent->InitSphereRadius(220.0f);
	SphereComponent->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	SphereVisual->AttachTo(RootComponent);

	ConstructorHelpers::FObjectFinder<UStaticMesh> SphereAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> SphereMat(TEXT("/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold"));
	if (SphereAsset.Succeeded() && SphereMat.Succeeded())
	{
		SphereVisual->SetStaticMesh(SphereAsset.Object);
		SphereVisual->SetMaterial(0, SphereMat.Object);
		SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -50.0f));
	}

	UParticleSystemComponent* FireParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles"));

	FireParticles->AttachTo(SphereVisual);
	FireParticles->bAutoActivate = true;

	ConstructorHelpers::FObjectFinder<UParticleSystem> FireVisual(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (FireVisual.Succeeded())
	{
		FireParticles->SetTemplate(FireVisual.Object);
	}

	TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));

	TextRenderComponent->AttachTo(SphereVisual);
	TextRenderComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 110.0f));
	TextRenderComponent->SetHorizontalAlignment(EHTA_Center);
	TextRenderComponent->SetYScale(2.0f);
	TextRenderComponent->SetXScale(2.0f);
	TextRenderComponent->SetVisibility(true);
	TextRenderComponent->SetTextRenderColor(FColor::Black);
	TextRenderComponent->SetText(NSLOCTEXT("AnyNs", "Any", "HelloWorld"));
	
	OnActorBeginOverlap.AddDynamic(this, &AHelloSphere::MyOnBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AHelloSphere::MyOnEndOverlap);
}

// Called when the game starts or when spawned
void AHelloSphere::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHelloSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called Begin Overlap
void AHelloSphere::MyOnBeginOverlap(AActor* OverlappedActor, AActor* otherActor)
{
	FString outputString;
	outputString = "Hello " + otherActor->GetName() + "!";
	TextRenderComponent->SetText(outputString);
}

// Called end Overlap
void AHelloSphere::MyOnEndOverlap(AActor* OverlappedActor, AActor* otherActor)
{
	TextRenderComponent->SetText(NSLOCTEXT("AnyNs", "Any", "HelloWorld"));
}