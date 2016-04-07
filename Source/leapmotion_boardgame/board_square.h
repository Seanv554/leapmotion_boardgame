// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "board_piece.h"
#include "board_square.generated.h"

UCLASS()
class LEAPMOTION_BOARDGAME_API Uboard_square : public UActorComponent
{

	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	Uboard_square();
	Uboard_square(FVector squareDimensions);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
