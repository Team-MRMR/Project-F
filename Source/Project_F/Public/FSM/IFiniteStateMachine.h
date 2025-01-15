// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "State/StateBase.h"
#include "IFiniteStateMachine.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIFiniteStateMachine : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECT_F_API IIFiniteStateMachine
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void UpdateState() = 0;
	virtual void ChangeState(StateBase* NextState) = 0;
};
