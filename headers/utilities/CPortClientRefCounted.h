#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmapi.dll by Windissect. 5 member(s).
class CPortClientRefCounted {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPortClientRefCounted@@QEAA@I@Z
    CPortClientRefCounted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredDisconnectIfLastCaller@CPortClientRefCounted@@QEAAXXZ
    void DeferredDisconnectIfLastCaller();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPortClientRefCounted@@QEAAKXZ
    unsigned long Release();
};
