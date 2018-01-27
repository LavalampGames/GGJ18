// Fill out your copyright notice in the Description page of Project Settings.

#include "GameEvent.h"


// Sets default values
AGameEvent::AGameEvent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	current_sequence_index_ = 0;
}

// Called when the game starts or when spawned
void AGameEvent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameEvent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

