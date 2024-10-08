// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakePawn.h"

// Sets default values
ASnakePawn::ASnakePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setup Vars
	moveSpeed = 0.5f;
	turnSpeed = 1.0f;

	//Create Components
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	CreateDefaultSubobject<UInputComponent>(TEXT("Input"));
	RootComponent = Camera;

	//Setup Camera
	Camera->FieldOfView = 90.f;
	Camera->SetRelativeLocation(FVector(0.f, 0.f, 110.0f));
	//Camera->SetupAttachment(Mesh);

	//Setup Mesh
	Mesh->SetGenerateOverlapEvents(true);
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ASnakePawn::OnOverlap);
}

// Called when the game starts or when spawned
void ASnakePawn::BeginPlay()
{
	Super::BeginPlay();
	
	gameMode = StaticCast<APlayingMode*>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void ASnakePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector movePos = this->GetActorLocation();
	movePos += this->GetActorForwardVector() * moveSpeed;
	this->SetActorLocation(movePos, true);

}

void ASnakePawn::MoveLR(float axis)
{
	FRotator newRot = this->GetActorRotation();
	//newRot.Add(0.f, 0.f, axis * 90.f); //adjust so only once per press
	newRot.Add(0.f, axis * turnSpeed, 0.f);
	this->SetActorRotation(newRot); //not working
}


// Called to bind functionality to input
void ASnakePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveLR"), this, &ASnakePawn::MoveLR);
}

void ASnakePawn::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	//gameMode->Score(10.f);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Hit!"));
}