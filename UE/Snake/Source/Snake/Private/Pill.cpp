// Fill out your copyright notice in the Description page of Project Settings.


#include "Pill.h"

// Sets default values
APill::APill()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
}

// Called when the game starts or when spawned
void APill::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APill::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

