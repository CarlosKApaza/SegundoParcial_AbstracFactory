// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"

#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;

	meshNave= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave Mesh"));
	meshNave->SetupAttachment(RootComponent);
	RootComponent = meshNave;

	NombreNave = "Nave Carlitos";
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString ANaveEnemiga::GetNombreNave()
{
	return NombreNave;
}

