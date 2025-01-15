// Fill out your copyright notice in the Description page of Project Settings.


#include "State/StateBase.h"
#include "Entity/EntityBase.h"

StateBase::StateBase(EntityBase* Entity)
{
	this->Entity = Entity;
}

StateBase::~StateBase()
{

}