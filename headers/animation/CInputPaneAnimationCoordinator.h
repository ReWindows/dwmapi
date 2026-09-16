#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmapi.dll by Windissect. 5 member(s).
class CInputPaneAnimationCoordinator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAnimation@CInputPaneAnimationCoordinator@@UEAAJPEAUIUnknown@@PEAUIDCompositionAnimation@@@Z
    virtual long AddAnimation(IUnknown *, IDCompositionAnimation *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputPaneAnimationCoordinator@@QEAA@XZ
    CInputPaneAnimationCoordinator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CInputPaneAnimationCoordinator@@IEAAJAEBU_GUID@@@Z
    long Initialize(_GUID const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CInputPaneAnimationCoordinator@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CInputPaneAnimationCoordinator@@AEAAJXZ
    long _Initialize();
};
