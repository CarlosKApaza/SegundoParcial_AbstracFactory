// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaNavesNiv1.h"

#include "NaveCaza.h"
#include "NaveCazaReposo.h"

ANaveEnemiga* AFabricaNavesNiv1::CrearNaves(FString NombreNaveSKU, FVector PosicionNave, FRotator Rotacion)
{
	// Selecciona que nave crear dependiendo de la cadena pasada
		if (NombreNaveSKU.Equals("NaveCaza")) {
		return GetWorld()->SpawnActor<ANaveCaza>(ANaveCaza::StaticClass(), PosicionNave, Rotacion);
	}
	else if (NombreNaveSKU.Equals("NaveCazaReposo")) {
		return GetWorld()->SpawnActor<ANaveCazaReposo>(ANaveCazaReposo::StaticClass(), PosicionNave, Rotacion);
	}
	else return nullptr; //Si la cadena es nula o no coincide con ninguna nave, devuelve nullptr
}
