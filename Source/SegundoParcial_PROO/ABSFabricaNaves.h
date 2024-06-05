// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "NaveEnemiga.h"
#include "SegundoParcial_PROOGameMode.h"

#include "ABSFabricaNaves.generated.h"

UCLASS()
class SEGUNDOPARCIAL_PROO_API AABSFabricaNaves : public AActor
{
	GENERATED_BODY()
	
public:	
	AABSFabricaNaves();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

// Metodo virtual para la facriba
public:
	//Funcion pura para crear una nave enemiga
	virtual ANaveEnemiga* CrearNaves(FString NombreNaveSKU, FVector PosicionNave, FRotator RotacionNave) PURE_VIRTUAL(AABSFabricaNaves::CrearNaves, return nullptr;)

		//Ordena, crea y retorna una pocion de una categoria especifica
		ANaveEnemiga* OrdenarNave(FString Categoria, FVector UbicacionNaveOrden, FRotator RotacionNaves);

};
