// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCazaAtaque.h"

ANaveCazaAtaque::ANaveCazaAtaque()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	meshNave->SetStaticMesh(malla.Object);

	NombreNave = "NaveCazaAtaque"; //Nombre de la nave
}

void ANaveCazaAtaque::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveCazaAtaque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
