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




ASegundoParcial_PROOGameMode::ASegundoParcial_PROOGameMode()
{
	DefaultPawnClass = ASegundoParcial_PROOPawn::StaticClass();
}

void ASegundoParcial_PROOGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Llamo al mundo la fabrica
	AABSFabricaNaves* FabricaNavesNiv1 = GetWorld()->SpawnActor<AFabricaNavesNiv1>(AFabricaNavesNiv1::StaticClass());
	AABSFabricaNaves* FabricaNavesNiv2 = GetWorld()->SpawnActor<AFabricaNavesNiv2>(AFabricaNavesNiv2::StaticClass());


	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		FVector	PosicionNavesNiv1 = FVector(-450.0f, -200.0f, 200.0f);
		FRotator RotacionNavesNiv1 = FRotator(0.0f, 180.0f, 0.0f);  // Rotación en Z a 180 grados

		for (int i = 0; i < 5; i++)
		{
			ANaveEnemiga* NaveCaza = FabricaNavesNiv1->OrdenarNave("NaveCaza", PosicionNavesNiv1, RotacionNavesNiv1);
			TANavesEnemigas.Add(NaveCaza);
			PosicionNavesNiv1.Y += 200;
		}
		PosicionNavesNiv1.X = PosicionNavesNiv1.X = -150.0f; // Actualizamos la posicion en el eje X
		PosicionNavesNiv1.Y = PosicionNavesNiv1.Y = -200.0f;

		for (int i = 0; i < 5; i++)
		{
			ANaveEnemiga* NaveCaza = FabricaNavesNiv1->OrdenarNave("NaveCazaReposo", PosicionNavesNiv1, RotacionNavesNiv1);
			TANavesEnemigas.Add(NaveCaza);
			PosicionNavesNiv1.Y += 200;
		}

		FVector	PosicionNavesNiv2 = FVector(300.0f, -650.0f, 200.0f); // Posicion inicial de las Naves Terrestres
		FRotator RotacionNavesNiv2 = FRotator(0.0f, 180.0f, 0.0f);

		for (int i = 0; i < 5; i++)
		{
			ANaveEnemiga* NaveCaza2 = FabricaNavesNiv2->OrdenarNave("NaveCazAtaque", PosicionNavesNiv2, RotacionNavesNiv2);
			TANavesEnemigas.Add(NaveCaza2);
			PosicionNavesNiv1.Y += 200;
		}

		PosicionNavesNiv2.X = PosicionNavesNiv2.X = -150.0f; // Actualizamos la posicion en el eje X
		PosicionNavesNiv2.Y = PosicionNavesNiv2.Y = -200.0f;

	}

	// Temporizador 

}

void ASegundoParcial_PROOGameMode::Tick(float DeltaTime)
{
	AABSFabricaNaves* FabricaNavesNiv1 = GetWorld()->SpawnActor<AFabricaNavesNiv1>(AFabricaNavesNiv1::StaticClass());
	AABSFabricaNaves* FabricaNavesNiv2 = GetWorld()->SpawnActor<AFabricaNavesNiv2>(AFabricaNavesNiv2::StaticClass());

	Super::Tick(DeltaTime);

	TimeElapsed += DeltaTime;
	if (TimeElapsed > 10.0f)
	{
		UWorld* World = GetWorld();
		if (World != nullptr) {

		
		// Genera un número aleatorio entre 15 y 20
		int32 NumNaves = FMath::RandRange(15, 20);
		FVector PosicionInicial = FVector(100.0f, 100.0f, 200.0f); 
		FRotator RotacionInicial = FRotator(0.0f, 180.0f, 0.0f); 


		FVector PosicionInicial2 = FVector(100.0f, 100.0f, 200.0f);
		FRotator RotacionInicial2 = FRotator(0.0f, 180.0f, 0.0f);

		for (int i = 0; i < NumNaves; i++)
		{
			// Aquí asumimos que tienes una función que crea las naves caza
			ANaveEnemiga* NaveCaza = FabricaNavesNiv1->OrdenarNave("NaveCaza", PosicionInicial, RotacionInicial);
			TANavesEnemigas.Add(NaveCaza);
			PosicionInicial.Y += 200; // Actualiza la posición en Y para la siguiente nave
		}


		for (int i = 0; i < NumNaves; i++)
		{
			ANaveEnemiga* NaveCaza = FabricaNavesNiv1->OrdenarNave("NaveCazaReposo", PosicionInicial, RotacionInicial);
			TANavesEnemigas.Add(NaveCaza);
			PosicionInicial.Y += 200; // Actualiza la posición en Y para la siguiente nave
		}
		TimeElapsed = 0.0f; // Restablece el temporizador para el próximo escuadrón
		}
	}
}

