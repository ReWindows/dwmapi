// Windissect exhaustive candidate class surface for dwmapi.dll.
// Experimental: declarations may contain unresolved PDB language ambiguities.
#pragma once

#include "windissect_abi.h"
#include "windissect_forwards.h"
#include "windissect_vcalls.h"
#include "windissect_calls.h"
#include "utilities/Details.h"
#include "utilities/CApiPortClient.h"
#include "utilities/CPortClient.h"
#include "utilities/CDwmHwndData.h"
#include "animation/CInputPaneAnimationCoordinator.h"
#include "utilities/CPortClientRefCounted.h"
#include "utilities/ModuleBase.h"
#include "animation/CHideInputPaneAnimationCoordinator.h"
#include "animation/CShowInputPaneAnimationCoordinator.h"
#include "utilities/DefaultHeap.h"
#include "utilities/DynamicImports.h"
#include "utilities/SRWLock.h"
