// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_ItemBase.generated.h"

UCLASS()
class INVENTORYSYSTEM_API ACPP_ItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_ItemBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Name = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int id = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString DisplayName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Description = "";


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void PickupItem() {};

};
