// Fill out your copyright notice in the Description page of Project Settings.

#include "Response.h"
#include "Responder.h"

// Sets default values
AResponse::AResponse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AResponse::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AResponse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AResponse::SetParentResponder(AResponder* responder)
{
	parent_responder_ = responder;
}

AResponder* AResponse::GetParentResponder()
{
	return parent_responder_;
}

