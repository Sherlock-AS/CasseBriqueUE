// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/Ball.h"
#include "Components/SphereComponent.h"
#include "./Player/PaddlePawn.h"

// Sets default values
ABall::ABall()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create SphereComponent and set as RootComponent for the Actor
	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	RootComponent = SphereCollision;

	// Create StaticMeshComponent and Attach to BoxComponent
	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
	BallMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();

	// Bind function OnActorBeginOverlap with your class function OnOverlap
	this->OnActorBeginOverlap.AddDynamic(this, &ABall::OnOverlap);

	FVector InitialVelocity = FVector(-1500, 0, 0);

	BallMesh->SetPhysicsLinearVelocity(InitialVelocity);
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*FVector Velocity = BallMesh->GetPhysicsLinearVelocity();
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Velocity: %s"), *Velocity.ToString()));*/

}

void ABall::OnOverlap(AActor* MyActor, AActor* OtherActor)
{
	//debug message
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Overlap")));

	if (auto Ball = Cast<APaddlePawn>(OtherActor)) {
		FVector BallVelocity = BallMesh->GetPhysicsLinearVelocity();

		BallVelocity.X *= -1;

		BallMesh->SetPhysicsLinearVelocity(BallVelocity);
	}
}

