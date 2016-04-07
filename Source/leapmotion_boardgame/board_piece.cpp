// Fill out your copyright notice in the Description page of Project Settings.

#include "leapmotion_boardgame.h"
#include "board_piece.h"


// Sets default values
Aboard_piece::Aboard_piece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aboard_piece::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aboard_piece::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

