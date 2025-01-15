// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/FiniteStateMachine.h"
#include "State/StateBase.h"

FiniteStateMachine::FiniteStateMachine(StateBase* State)
{
	CurrState = State;
	ChangeState(CurrState);
}

FiniteStateMachine::~FiniteStateMachine()
{
}

void FiniteStateMachine::UpdateState()
{
	if (CurrState != nullptr)
	{
		CurrState->OnStateUpdate();
	}
}

void FiniteStateMachine::ChangeState(StateBase* NextState)
{
	if (CurrState == NextState)
	{
		return;
	}

	if (CurrState != nullptr)
	{
		CurrState->OnStateEnd();
	}

	CurrState = NextState;
	CurrState->OnStateEnter();
}
