// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ADAPTER_GALAGA_L08GameMode.generated.h"

UCLASS(MinimalAPI)
class AADAPTER_GALAGA_L08GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AADAPTER_GALAGA_L08GameMode();

public:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AAdaptador_Torreta* AdaptadorTorreta;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AADAPTER_GALAGA_L08Pawn* Nave;


};



