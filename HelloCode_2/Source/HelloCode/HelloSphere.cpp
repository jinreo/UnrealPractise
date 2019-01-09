// Fill out your copyright notice in the Description page of Project Settings.

#include "HelloSphere.h"

#include "Components/SphereComponent.h"

// Sets default values
AHelloSphere::AHelloSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 루트 컴포넌트는 겹침과 충돌을 알려주는 구체 컴포넌트가 될 것이다.
	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));

	SphereComponent->InitSphereRadius(220.0f);
	SphereComponent->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
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

