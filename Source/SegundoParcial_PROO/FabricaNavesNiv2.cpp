// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaNavesNiv2.h"

#include "NaveCazaAtaque.h"
#include "NaveCazaDefensor.h"

ANaveEnemiga* AFabricaNavesNiv2::CrearNaves(FString NombreNaveSKU, FVector PosicionNave, FRotator Rotacion)
{
	// Selecciona que nave crear dependiendo de la cadena pasada
	if (NombreNaveSKU.Equals("NaveCazaAtaque")) {
		return GetWorld()->SpawnActor<ANaveCazaAtaque>(ANaveCazaAtaque::StaticClass(),
			PosicionNave, Rotacion);
	}

	// Selecciona que nave crear dependiendo de la cadena pasada
	else if (NombreNaveSKU.Equals("NaveCazaDefensor")) {
		return GetWorld()->SpawnActor<ANaveCazaDefensor>(ANaveCazaDefensor::StaticClass(),
			PosicionNave, Rotacion);
	}
	else return nullptr; //Si la cadena es nula o no coincide con ninguna nave, devuelve nullptr
}
