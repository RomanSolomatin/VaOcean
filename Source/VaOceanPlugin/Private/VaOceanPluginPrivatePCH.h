// Copyright 2014 Vladimir Alyamkin. All Rights Reserved.

#pragma once

#include "CoreUObject.h"
#include "Engine.h"
#include "UniformBuffer.h"
#include "ShaderParameters.h"
#include "GlobalShader.h"

// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.
#include "ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogVaOcean, Log, All)

#include "IVaOceanPlugin.h"

#include "VaOceanShaders.h"
#include "VaOceanSimulatorComponent.h"
