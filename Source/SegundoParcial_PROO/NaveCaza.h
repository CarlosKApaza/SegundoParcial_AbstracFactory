// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveCaza.generated.h"

/**
 * 
 */
UCLASS()
class SEGUNDOPARCIAL_PROO_API ANaveCaza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	ANaveCaza();
	
public:
	virtual void Tick(float DeltaTime) override;

};
