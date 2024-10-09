// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownAttributeSet.h"
#include "VitalAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNPROJECT_API UVitalAttributeSet : public UTopDownAttributeSet
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Health);
	
};
