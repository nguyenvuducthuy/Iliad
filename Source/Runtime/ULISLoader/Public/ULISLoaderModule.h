// Copyright © 2018-2019 Praxinos, Inc. All Rights Reserved.
// IDDN FR.001.250001.002.S.P.2019.000.00000

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include <ULIS3>

class IULISLoaderModule : public IModuleInterface
{
public:
    static  inline  IULISLoaderModule& Get() {
        return  FModuleManager::LoadModuleChecked< IULISLoaderModule >( "ULISLoader" );
    }

    static  inline  bool  IsAvailable() {
        return  FModuleManager::Get().IsModuleLoaded( "ULISLoader" );
    }

    virtual ::ul3::FThreadPool* ThreadPool() =                      0;
    virtual const ::ul3::FHostDeviceInfo& HostDeviceInfo()  const = 0;
    virtual const ::ul3::FFontEngine& FontEngine()          const = 0;
    virtual const ::ul3::FFontRegistry& FontRegistry()      const = 0;
};

