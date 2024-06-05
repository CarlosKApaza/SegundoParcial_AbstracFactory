// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza.h"

void ANaveCaza::BeginPlay()
{
	Super::BeginPlay();
}

ANaveCaza::ANaveCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	meshNave->SetStaticMesh(malla.Object);

	NombreNave = "NaveCaza"; //Nombre de la nave
}

void ANaveCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
