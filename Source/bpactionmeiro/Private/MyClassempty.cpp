// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClassempty.h"

// Sets default values
AMyClassempty::AMyClassempty()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyClassempty::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyClassempty::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

