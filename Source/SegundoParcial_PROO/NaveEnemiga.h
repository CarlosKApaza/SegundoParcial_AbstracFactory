// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class SEGUNDOPARCIAL_PROO_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:	
	ANaveEnemiga();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;


public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* meshNave;

	FString NombreNave;

	FString GetNombreNave();

};
