// Rights Property of Bryan A Quero

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/Box"
#include "DefenseTower.generated.h"

UCLASS()
class BOWARSTV_API ADefenseTower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefenseTower();
	int HealthPoints = 100;
	int ShellDefense = 2;
	float AttackRange = 15.0f;
	float ReloadInterval = 1.0f;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	int _HealthPoints; //the tower current health point
	float _ReloadCountDown;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int GetHealthPoints();
	bool IsDestroyed();
	bool CanFire();
	void Fire();
	void Hit(int damage);

protected:

	void DestroyProcess();

	

};
