// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TORRETA_ESPACIAL.generated.h"

UCLASS()
class ADAPTER_GALAGA_L08_API ATORRETA_ESPACIAL : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATORRETA_ESPACIAL();

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class UStaticMeshComponent* Malla_Torreta;

	//UPROPERTY(EditAnywhere, Category = "Componentes")
	//class UParticleSystem* Part_Torreta;

	//UPROPERTY(EditAnywhere, Category = "Componentes")
	//class UCapsuleComponent* Collision_Torreta; // para colisiones

	//// ~~ Componente de Sonido ~~
	//UPROPERTY(EditAnywhere, Category = "Componentes")
	//class USoundBase* Sonido_Torreta;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Disparar_Torreta();

	float TiempoDesdeUltimoDisparo;
	float TiempoDisparo; // Tiempo entre disparos, en segundos

};
