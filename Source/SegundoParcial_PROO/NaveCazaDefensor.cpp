// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCazaDefensor.h"

void ANaveCazaDefensor::BeginPlay()
{
	Super::BeginPlay();
}

ANaveCazaDefensor::ANaveCazaDefensor()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	meshNave->SetStaticMesh(malla.Object);

	NombreNave = "NaveCazaDefensor"; //Nombre de la nave
}

void ANaveCazaDefensor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
