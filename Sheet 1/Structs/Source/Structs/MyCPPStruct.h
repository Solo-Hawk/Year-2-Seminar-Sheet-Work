// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

USTRUCT(BlueprintType)
struct CharacterStruct {
	GENERATED_BODY()//Satisfies the need for GENERATED_BODY() in the class
		UPROPERTY(EditAnywhere, BlueprintReadWrite)//This allows the property to have access elsewhere in unreal (e.g. blueprints)
		int some_int;

};

USTRUCT(BlueprintType)
struct WeaponStruct {

	GENERATED_BODY() //Satisfies the need for GENERATED_BODY() in the class

	UPROPERTY(EditAnywhere, BlueprintReadWrite) //This allows the property to have access elsewhere in unreal (e.g. blueprints)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float durability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float damage;
};

/**
 *
 */
 /**
  *
  */
UCLASS()
class MyCPPStruct UStructLib : public UObject
{
	GENERATED_BODY()

};

