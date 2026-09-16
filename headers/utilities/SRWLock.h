#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmapi.dll by Windissect. 1 member(s).
namespace Microsoft::WRL::Wrappers {
class SRWLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z
    static ::Microsoft::WRL::Wrappers::Details::SyncLockExclusive LockExclusive(_RTL_SRWLOCK *);
};
} // namespace Microsoft::WRL::Wrappers
