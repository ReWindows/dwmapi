#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmapi.dll by Windissect. 2 member(s).
class DefaultHeap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@DefaultHeap@@SAPEAX_K@Z
    static void * Alloc(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@DefaultHeap@@SAXPEAX@Z
    static void Free(void *);
};
