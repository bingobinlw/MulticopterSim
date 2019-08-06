/*
* Class declaration for pawn class using stubbed flight manager
*
* Copyright (C) 2019 Simon D. Levy
*
* MIT License
*/

#pragma once

#include "../MainModule/vehicles/Phantom.h"

#include "HoverFlightManager.hpp"
#include "TargetPawn.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "HoverPhantomPawn.generated.h"

UCLASS(Config=Game)
class FLIGHTMODULE_API AHoverPhantomPawn : public APawn {

    private:

        GENERATED_BODY()

        // Helper class
        Phantom _phantom;

        ATargetPawn * _targetPawn = NULL;

    protected:

        // AActor overrides

        virtual void BeginPlay() override;

        virtual void Tick(float DeltaSeconds) override;

        virtual void PostInitializeComponents() override;

        virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

        // virtual void NotifyHit(...) override

    public:	

        AHoverPhantomPawn();

}; // AHoverPhantomPawn
