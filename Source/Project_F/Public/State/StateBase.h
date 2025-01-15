// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State/IStatable.h"
#include "Entity/EntityBase.h"

/**
 * Enum representing different states in the game.
 */
UENUM(BlueprintType) // Enables use in Blueprints
enum class EState : uint8
{
    Idle        UMETA(DisplayName = "Idle"),
    Patrol      UMETA(DisplayName = "Patrol"),  
    Approach    UMETA(DisplayName = "Approach"),
    Battle      UMETA(DisplayName = "Battle"),  
    Die         UMETA(DisplayName = "Die"),     
};

/**
 * 
 */
class PROJECT_F_API StateBase : public IIStatable
{
/***** Variables *****/
public:
    

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Entity, meta = (AllowPrivateAccess = "true"))
    class EntityBase* Entity;

/***** Functions *****/
public:
	StateBase(EntityBase* entity);
	~StateBase() = 0;

    virtual void OnStateEnter() = 0;
    virtual void OnStateUpdate() = 0;
    virtual void OnStateEnd() = 0;

};
