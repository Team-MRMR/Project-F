// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IStatable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIStatable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECT_F_API IIStatable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void OnStateEnter() = 0;
	virtual void OnStateUpdate() = 0;
	virtual void OnStateEnd() = 0;
};
