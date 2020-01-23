// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseMonster.generated.h"

UCLASS()
class INHERITENCEEXP_API ABaseMonster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseMonster();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Name = "Monster";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Health = 100.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Damage = 8.0;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Attack(ABaseMonster Target) { Target.DamageMonster(Damage); };

	virtual void DamageMonster(float damageTake) { Health -= damageTake; }

	

};
