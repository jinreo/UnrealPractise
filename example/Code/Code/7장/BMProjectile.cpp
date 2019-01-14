// Fill out your copyright notice in the Description page of Project Settings.

#include "BMProjectile.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABMProjectile::ABMProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 구체를 간단한 충돌 표현으로 사용한다
	ProjCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));

	ProjCollision->InitSphereRadius(10.0f);
	ProjCollision->BodyInstance.SetCollisionProfileName("BlockAll");
	ProjCollision->OnComponentHit.AddDynamic(this, &ABMProjectile::OnHit);

	OnDestroyed.AddDynamic(this, &ABMProjectile::OnDestoyedProjectile);

	ProjCollision->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	ProjCollision->CanCharacterStepUpOn = ECB_No;
	RootComponent = ProjCollision;

	ProjMesh = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("MeshComp"));

	ProjMesh->AttachTo(ProjCollision);
	ProjMesh->SetCollisionProfileName(TEXT("NoCollision"));

	ProjParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));

	ProjParticle->bAutoActivate = false;
	ProjParticle->AttachTo(ProjCollision);

	// 발사체의 이동을 제어하기 위해 ProjectileMovementComponent 사용
	ProjMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjMovement->UpdatedComponent = ProjCollision;
	ProjMovement->InitialSpeed = 3000.f;
	ProjMovement->MaxSpeed = 3000.f;
	ProjMovement->bRotationFollowsVelocity = true;

	// 기본적으로 3초 뒤에 죽는다
	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void ABMProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABMProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABMProjectile::OnHit(class UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!OtherActor->GetClass()->IsChildOf(this->StaticClass()))
	{
		ProjCollision->SetCollisionProfileName(TEXT("NoCollision"));
		ProjCollision->bGenerateOverlapEvents = false;
		ProjMesh->SetVisibility(false);

		ProjParticle->Activate();
		ProjParticle->DetachFromParent(true);
	}
}

void ABMProjectile::OnDestoyedProjectile(AActor* DestroyingActor)
{

}