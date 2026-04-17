// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "MyPropeller.generated.h"

/**
 * 
 */
UCLASS()
class L20260417_ENHANCED_API UMyPropeller : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	UMyPropeller();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
