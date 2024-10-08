// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayingMode.h"
#include "SnakePawn.h"

APlayingMode::APlayingMode()
{
	//DefaultPawnClass = ASnakePawn::StaticClass();
}

void APlayingMode::Score(float amount)
{
	currentScore += amount;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Hello Everybody!"));
}