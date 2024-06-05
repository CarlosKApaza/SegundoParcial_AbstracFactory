// Fill out your copyright notice in the Description page of Project Settings.



#include "CoreMinimal.h"
#include "ABSFabricaNaves.h"
#include "FabricaNavesNiv1.generated.h"

/**
 * 
 */
UCLASS()
class SEGUNDOPARCIAL_PROO_API AFabricaNavesNiv1 : public AABSFabricaNaves
{
	GENERATED_BODY()

public:
	virtual ANaveEnemiga* CrearNaves(FString NombreNaveSKU, FVector PosicionNave, FRotator Rotacion) override;
};
