// Fill out your copyright notice in the Description page of Project Settings.

#include "leapmotion_boardgame.h"
#include "LMGrabber.h"


// Sets default values for this component's properties
ULMGrabber::ULMGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULMGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULMGrabber::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

