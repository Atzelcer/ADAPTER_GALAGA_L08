// Fill out your copyright notice in the Description page of Project Settings.


#include "Adaptador_Torreta.h"
#include "TORRETA_ESPACIAL.h"

// Sets default values
AAdaptador_Torreta::AAdaptador_Torreta()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdaptador_Torreta::BeginPlay()
{
	Super::BeginPlay();

	Torreta_Spaw = GetWorld()->SpawnActor<ATORRETA_ESPACIAL>(ATORRETA_ESPACIAL::StaticClass(), FVector(0.f, 0.f, 210.f), FRotator::ZeroRotator);
	if (!Torreta_Spaw)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo engendrar la torreta."));
	}
}

// Called every frame
void AAdaptador_Torreta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAdaptador_Torreta::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAdaptador_Torreta::Disparo_TorretaB()
{
	if (Torreta_Spaw)
	{
		Torreta_Spaw->Disparar_Torreta();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, TEXT("La torreta no está disponible."));
	}
}

