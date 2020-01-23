// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseMonster.h"
#include "ShieldMaster.generated.h"

/**
 * 
 */
UCLASS()
class INHERITENCEEXP_API AShieldMaster : public ABaseMonster
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isBlocked = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int shieldDurability = 5;

	virtual void toggleBlock() { isBlocked = !isBlocked; }

	
	
};
