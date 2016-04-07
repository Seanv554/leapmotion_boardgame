// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "board_square.h"
#include "board_spawner.generated.h"

UCLASS()
class LEAPMOTION_BOARDGAME_API Aboard_spawner : public AActor
{
	Uboard_square* boardRefs[8][8];
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, Category = "Game_Board")
	UActorComponent* BoardSquareBlueprintA;

	UPROPERTY(EditAnywhere, Category = "Game_Board")
	UActorComponent* BoardSquareBlueprintB;

	// Sets default values for this actor's properties
	Aboard_spawner();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void CreateBoard(UWorld* World);
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintImplementableEvent)
	void SetBoardSquares(UActorComponent* a1, UActorComponent* a2);

	
	
};
