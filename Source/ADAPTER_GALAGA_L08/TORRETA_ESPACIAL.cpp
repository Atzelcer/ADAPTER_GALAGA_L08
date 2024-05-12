// Fill out your copyright notice in the Description page of Project Settings.


#include "TORRETA_ESPACIAL.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "PROYECTIL_LASER.h"

// Sets default values
ATORRETA_ESPACIAL::ATORRETA_ESPACIAL()
{
    // Set this pawn to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Crear y configurar el componente de malla estática
    Malla_Torreta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TORRETA_ESPACIAL'"));
    RootComponent = Malla_Torreta;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Torreta07/TORRETA_ESPACIAL.TORRETA_ESPACIAL'"));
    if (MeshAsset.Succeeded())
    {
        Malla_Torreta->SetStaticMesh(MeshAsset.Object);
        //// Modificar la escala del componente de malla
        //FVector NewScale(1.5f, 1.5f, 1.5f); // Escala modificada
        //Malla_Torreta->SetWorldScale3D(NewScale);
    }

    TiempoDesdeUltimoDisparo = 0.0f;
    TiempoDisparo = 2.0f; // Tiempo entre disparos, en segundos

}

// Called when the game starts or when spawned
void ATORRETA_ESPACIAL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATORRETA_ESPACIAL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoDesdeUltimoDisparo += DeltaTime;
	if (TiempoDesdeUltimoDisparo >= TiempoDisparo) {
		Disparar_Torreta();
		TiempoDesdeUltimoDisparo = 0.0f; // Restablecer el contador
	}

}

// Called to bind functionality to input
void ATORRETA_ESPACIAL::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATORRETA_ESPACIAL::Disparar_Torreta()
{
	const FVector ForwardDirection = GetActorForwardVector();
	const FVector SpawnLocation = GetActorLocation() + ForwardDirection * 400.0f;
	const FRotator FireRotation = ForwardDirection.Rotation();

	UWorld* const World = GetWorld();
	if (World != nullptr) {
		APROYECTIL_LASER* Proyectil = World->SpawnActor<APROYECTIL_LASER>(SpawnLocation, FireRotation);
		if (Proyectil) {
			UProjectileMovementComponent* ProjectileMovement = Proyectil->FindComponentByClass<UProjectileMovementComponent>();
			if (ProjectileMovement) {
				ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * 1500.0f);
				ProjectileMovement->Activate();
			}
		}
	}
}

