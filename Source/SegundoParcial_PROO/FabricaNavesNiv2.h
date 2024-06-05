// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABSFabricaNaves.h"
#include "FabricaNavesNiv2.generated.h"

/**
 * 
 */
UCLASS()
class SEGUNDOPARCIAL_PROO_API AFabricaNavesNiv2 : public AABSFabricaNaves
{
	GENERATED_BODY()

public:
	virtual ANaveEnemiga* CrearNaves(FString NombreNaveSKU, FVector PosicionNave, FRotator Rotacion) override;
	
};
