// Copyright Epic Games, Inc. All Rights Reserved.

#include "ADAPTER_GALAGA_L08GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "TORRETA_ESPACIAL.h"
#include "Adaptador_Torreta.h"
#include "ADAPTER_GALAGA_L08Pawn.h"

AADAPTER_GALAGA_L08GameMode::AADAPTER_GALAGA_L08GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AADAPTER_GALAGA_L08Pawn::StaticClass();

	PrimaryActorTick.bCanEverTick = true;
}

void AADAPTER_GALAGA_L08GameMode::BeginPlay()
{
	Super::BeginPlay();

	Nave = Cast<AADAPTER_GALAGA_L08Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	AdaptadorTorreta = GetWorld()->SpawnActor<AAdaptador_Torreta>(AAdaptador_Torreta::StaticClass(), FVector(10, 30, 210), FRotator::ZeroRotator);

	Nave->Set_Torreta(AdaptadorTorreta);

	Nave->Disparo_TorretaB();


}

void AADAPTER_GALAGA_L08GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

