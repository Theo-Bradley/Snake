// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlayingMode.h"
#include "SnakePawn.generated.h"

UCLASS()
class SNAKE_API ASnakePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASnakePawn();

	UFUNCTION()
	void MoveLR(float axis);

	UFUNCTION(NotBlueprintable)
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Main Pawn Mesh
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	//Main Pawn Camera
	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;

	//make UCATEGORY? Movement
	UPROPERTY(EditAnywhere)
	float moveSpeed;

	UPROPERTY(EditAnywhere)
	float turnSpeed;

	APlayingMode* gameMode;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
