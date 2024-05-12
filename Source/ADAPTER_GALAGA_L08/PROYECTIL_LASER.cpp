// Fill out your copyright notice in the Description page of Project Settings.


#include "PROYECTIL_LASER.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
//#include "P_BU_MASTER_SHIP_CONS_02.h"

// Sets default values
APROYECTIL_LASER::APROYECTIL_LASER()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Creando la malla del proyectil
	Projectil_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil_Mesh"));
	RootComponent = Projectil_Mesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshAsset.Succeeded())
	{
		Projectil_Mesh->SetStaticMesh(MeshAsset.Object);

		// Modificar la escala del componente de malla
		FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
		Projectil_Mesh->SetWorldScale3D(NewScale);
	}

	// Inicializar el sistema de partículas para la explosión
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		Explosion_Particles = ParticleAsset.Object;
	}

	// Inicializar el sonido de la colisión
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (SoundAsset.Succeeded())
	{
		Projectil_Sound = SoundAsset.Object;
	}

	// Creando el componente de colisión del proyectil
	Projectil_Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectil_Collision"));
	Projectil_Collision->SetupAttachment(RootComponent);

	//Configurando el proyectil para que genere eventos de colision
	Projectil_Collision->SetCapsuleHalfHeight(160.0f);
	Projectil_Collision->SetCapsuleRadius(160.0f);

	//// Controlando el movimiento del proyectil
	Projectil_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectil_Movement"));
	Projectil_Movement->UpdatedComponent = Projectil_Mesh;
	Projectil_Movement->InitialSpeed = 0.f; // velocidad inicial
	Projectil_Movement->MaxSpeed = 0.f; // velocidad máxima
	Projectil_Movement->bRotationFollowsVelocity = true;
	Projectil_Movement->bShouldBounce = false; // no rebota
	Projectil_Movement->ProjectileGravityScale = 0.f; // sin gravedad

	//Determinando la velocidad del proyectil
	Projectil_Movement->InitialSpeed = 750.0f;
	Projectil_Movement->MaxSpeed = 850.0f;

	//Tiempo de vida del proyectil
	InitialLifeSpan = 6.0f;


}

// Called when the game starts or when spawned
void APROYECTIL_LASER::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APROYECTIL_LASER::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APROYECTIL_LASER::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//if (OtherActor->IsA(AP_BU_MASTER_SHIP_CONS_02::StaticClass())) {
	//	//Efectos_De_Colision();
	//	Destroy();
	//}
}

void APROYECTIL_LASER::Efectos_De_Colision()
{
	if (Explosion_Particles != nullptr)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Particles, GetActorLocation());
	}

	if (Projectil_Sound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Projectil_Sound, GetActorLocation());
	}

	this->Destroy();
}

