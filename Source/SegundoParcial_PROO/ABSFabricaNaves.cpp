// Fill out your copyright notice in the Description page of Project Settings.

#include "ABSFabricaNaves.h"
#include "ABSFabricaNaves.generated.h"

// Sets default values
AABSFabricaNaves::AABSFabricaNaves()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AABSFabricaNaves::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABSFabricaNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* AABSFabricaNaves::OrdenarNave(FString Categotia, FVector UbicacionNaveOrden, FRotator RotacionNaves)
{
	// Crea la nave y registra su nombre
	ANaveEnemiga* NaveEnemiga = CrearNaves(Categotia, UbicacionNaveOrden, RotacionNaves);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Creando %s"), *NaveEnemiga->GetNombreNave()));

	// Retorna la nave creada
	return NaveEnemiga;
}


