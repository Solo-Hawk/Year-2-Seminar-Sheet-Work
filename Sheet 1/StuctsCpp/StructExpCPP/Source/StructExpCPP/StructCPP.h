// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "StructCPP.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FCharacterStruct {
	GENERATED_BODY()

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Team;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Armour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AActor*> Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor *EquippedItem;

};

USTRUCT(BlueprintType)
struct FContainerStruct {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool is_Locked;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool is_Open;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<AActor*> Inventory;
	

};

USTRUCT(BlueprintType)
struct FWeaponStruct : public FTableRowBase{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int WeaponID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Durability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Damage;

};

UCLASS()
class STRUCTEXPCPP_API UStructCPP : public UObject
{
	GENERATED_BODY()
	
};
