// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Torreta_INT.h"
#include "Adaptador_Torreta.generated.h"

UCLASS()
class ADAPTER_GALAGA_L08_API AAdaptador_Torreta : public APawn, public ITorreta_INT
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAdaptador_Torreta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:


	UPROPERTY(VisibleAnywhere, Category = "Torreta")
	class ATORRETA_ESPACIAL* Torreta_Spaw;


	void Disparo_TorretaB() override;

};
