// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveCazaReposo.generated.h"

/**
 * 
 */
UCLASS()
class SEGUNDOPARCIAL_PROO_API ANaveCazaReposo : public ANaveEnemiga
{
	GENERATED_BODY()
public:
	ANaveCazaReposo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
};
