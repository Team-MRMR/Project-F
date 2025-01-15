// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State/StateBase.h"
#include "FSM/IFiniteStateMachine.h"

/**
 * 
 */
class PROJECT_F_API FiniteStateMachine : public IIFiniteStateMachine
{

/***** Variables *****/
public:

private:
	class StateBase* CurrState;

/***** Functions *****/
public:
	FiniteStateMachine(StateBase* State);
	~FiniteStateMachine();

	void UpdateState() override;
	void ChangeState(StateBase* NextState) override;
};
