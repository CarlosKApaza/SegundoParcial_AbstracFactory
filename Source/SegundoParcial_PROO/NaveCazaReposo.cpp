// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCazaReposo.h"

ANaveCazaReposo::ANaveCazaReposo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	meshNave->SetStaticMesh(malla.Object);

	NombreNave = "NaveCazaReposo";
}

void ANaveCazaReposo::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveCazaReposo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
