// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseMonster.h"
#include "GreyDemon.generated.h"

/**
 * 
 */
UCLASS()
class INHERITENCEEXP_API AGreyDemon : public ABaseMonster
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGreyDemon();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Range = 350;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RangeDamage = 22;

public:
	virtual void RangeAttack(ABaseMonster Target) { Target.DamageMonster(RangeDamage); }
};
