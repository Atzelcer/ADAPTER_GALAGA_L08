// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Torreta_INT.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTorreta_INT : public UInterface
{
	GENERATED_BODY()
};


class ADAPTER_GALAGA_L08_API ITorreta_INT
{
	GENERATED_BODY()
public:
	
	virtual void Disparo_TorretaB() = 0;


};
