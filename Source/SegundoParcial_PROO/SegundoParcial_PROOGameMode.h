// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SegundoParcial_PROOGameMode.generated.h"


UCLASS(MinimalAPI)
class ASegundoParcial_PROOGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASegundoParcial_PROOGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;


public:
	TArray<class ANaveEnemiga*> TANavesEnemigas; //Array de Naves Enemigas


	FVector ubicacionNavesNiv1;
	FVector ubicacionNavesNiv2;


	float TimeElapsed;
	FTimerHandle NavesTimer;
	void crearEscuadronNaves();
	//void CrearEnemigosAleatoriamente
};



