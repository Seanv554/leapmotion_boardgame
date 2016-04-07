// Fill out your copyright notice in the Description page of Project Settings.

#include "leapmotion_boardgame.h"
#include "board_spawner.h"


// Sets default values
Aboard_spawner::Aboard_spawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aboard_spawner::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World)
	{
		//UE_LOG(LogTemp, Warning, TEXT("=====Spawning====="));
		CreateBoard(World);
	}
	
}

void Aboard_spawner::CreateBoard(UWorld* World) {
	FVector boardBaseOrigin;
	FVector boardBaseDimensions;
	this->GetActorBounds(false, boardBaseOrigin, boardBaseDimensions); //Get Board Base Dimensions

	

	//Populate boardRefs with board_square objects

}

void Aboard_spawner::SetBoardSquares(UActorComponent* a1, UActorComponent* a2)
{
	BoardSquareBlueprintA = a1;
	BoardSquareBlueprintA = a2;
}

// Called every frame
void Aboard_spawner::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

