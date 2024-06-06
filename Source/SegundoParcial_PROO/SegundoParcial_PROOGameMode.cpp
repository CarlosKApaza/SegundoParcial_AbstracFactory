// Copyright Epic Games, Inc. All Rights Reserved.

#include "SegundoParcial_PROOGameMode.h"
#include "SegundoParcial_PROOPawn.h"


#include "NaveCaza.h"
#include "NaveCazaReposo.h"
#include "NaveCazaAtaque.h"
#include "NaveCazaDefensor.h"

// Patron abstrac Factory

#include "ABSFabricaNaves.h"
#include "FabricaNavesNiv1.h"
#include "FabricaNavesNiv2.h"

// libreria para usar utilidades matematicas
#include "Kismet/KismetMathLibrary.h"




ASegundoParcial_PROOGameMode::ASegundoParcial_PROOGameMode()
{
	DefaultPawnClass = ASegundoParcial_PROOPawn::StaticClass();
    //TimeElapsed = 0;
}

void ASegundoParcial_PROOGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Llamo al mundo la fabrica
	FabricaNavesNiv1 = GetWorld()->SpawnActor<AFabricaNavesNiv1>(AFabricaNavesNiv1::StaticClass());
	FabricaNavesNiv2 = GetWorld()->SpawnActor<AFabricaNavesNiv2>(AFabricaNavesNiv2::StaticClass());


	
	// temporiador para generar escuadron cada 10 segundos (para prueba lo puse a 2 segundos)
	GetWorldTimerManager().SetTimer(EscuadronTimerHandle, this, &ASegundoParcial_PROOGameMode::GenerarEscuadron, 2.0f, true, 2.0f);

}

void ASegundoParcial_PROOGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//TimeElapsed += DeltaTime;

}

// Funcion para elegir un tipo de nave aleatorio
FString ASegundoParcial_PROOGameMode::ElegirTipoNaveAleatorio()
{
	TArray<FString> TiposNaves= { "NaveCaza", "NaveCazaReposo", "NaveCazaAtaque", "NaveCazaDefensor" };
	int32 Index = FMath::RandRange(0, TiposNaves.Num() - 1);
	return TiposNaves[Index];
}

// Funcion para generar una posicion aleatoria
FVector ASegundoParcial_PROOGameMode::GenerarPosicionAleatoria(FVector MinimaPosicion, FVector MaximaPosicion)
{
	float X = FMath::RandRange(MinimaPosicion.X, MaximaPosicion.X);
	float Y = FMath::RandRange(MinimaPosicion.Y, MaximaPosicion.Y);
	float Z = FMath::RandRange(MinimaPosicion.Z, MaximaPosicion.Z);
	return FVector(X, Y, Z);
}


// Funcion para generar escuadron
void ASegundoParcial_PROOGameMode::GenerarEscuadron()
{
    UWorld* World = GetWorld();
    if (World != nullptr)
    {
        // Generar un número aleatorio de naves entre 15 y 20
        int32 NumeroDeNaves = FMath::RandRange(15, 20);

        // Limites para posiciones aleatorias
        FVector MinPos(-1000.0f, -1000.0f, 200.0f);
        FVector MaxPos(1000.0f, 1000.0f, 400.0f);

        for (int32 i = 0; i < NumeroDeNaves; ++i)
        {
            // Elige un tipo de nave aleatorio
            FString TipoNave = ElegirTipoNaveAleatorio();

            // Genera una posición aleatoria
            FVector PosicionAleatoria = GenerarPosicionAleatoria(MinPos, MaxPos);
            FRotator RotacionAleatoria = FRotator(0.0f, FMath::RandRange(0.0f, 360.0f), 0.0f);

            ANaveEnemiga* Nave = nullptr;
            if (TipoNave == "NaveCazaAtaque" || TipoNave == "NaveCazaDefensor")
            {
                Nave = FabricaNavesNiv2->OrdenarNave(TipoNave, PosicionAleatoria, RotacionAleatoria);
            }
            else
            {
                Nave = FabricaNavesNiv1->OrdenarNave(TipoNave, PosicionAleatoria, RotacionAleatoria);
            }

            if (Nave)
            {
                TANavesEnemigas.Add(Nave);
            }
        }
    }
}


//	UWorld* World = GetWorld();
//	if (World != nullptr)
//	{
//		FVector	PosicionNavesNiv1 = FVector(-450.0f, -200.0f, 200.0f);
//		FRotator RotacionNavesNiv1 = FRotator(0.0f, 180.0f, 0.0f);  // Rotación en Z a 180 grados
//
//		for (int i = 0; i < 5; i++)
//		{
//			ANaveEnemiga* NaveCaza = FabricaNavesNiv1->OrdenarNave("NaveCaza", PosicionNavesNiv1, RotacionNavesNiv1);
//			TANavesEnemigas.Add(NaveCaza);
//			PosicionNavesNiv1.Y += 200;
//		}
//		PosicionNavesNiv1.X = PosicionNavesNiv1.X = -150.0f; // Actualizamos la posicion en el eje X
//		PosicionNavesNiv1.Y = PosicionNavesNiv1.Y = -200.0f;
//
//		for (int i = 0; i < 5; i++)
//		{
//			ANaveEnemiga* NaveCaza = FabricaNavesNiv1->OrdenarNave("NaveCazaReposo", PosicionNavesNiv1, RotacionNavesNiv1);
//			TANavesEnemigas.Add(NaveCaza);
//			PosicionNavesNiv1.Y += 200;
//		}
//
//		FVector	PosicionNavesNiv2 = FVector(500.0f, -650.0f, 200.0f); // Posicion inicial de las Naves Terrestres
//		FRotator RotacionNavesNiv2 = FRotator(0.0f, 180.0f, 0.0f);
//
//		for (int i = 0; i < 5; i++)
//		{
//			ANaveEnemiga* NaveCaza2 = FabricaNavesNiv2->OrdenarNave("NaveCazaAtaque", PosicionNavesNiv2, RotacionNavesNiv2);
//			TANavesEnemigas.Add(NaveCaza2);
//			PosicionNavesNiv2.Y += 200;
//		}
//
//		PosicionNavesNiv2.X = PosicionNavesNiv2.X = 150.0f; // Actualizamos la posicion en el eje X
//		PosicionNavesNiv2.Y = PosicionNavesNiv2.Y = 200.0f;
//
//		for (int i = 0; i < 5; i++)
//		{
//			ANaveEnemiga* NaveCaza2 = FabricaNavesNiv2->OrdenarNave("NaveCazaDefensor", PosicionNavesNiv2, RotacionNavesNiv2);
//			TANavesEnemigas.Add(NaveCaza2);
//			PosicionNavesNiv2.Y += 200;
//		}
//
//	}

