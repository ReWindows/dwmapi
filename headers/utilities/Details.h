#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmapi.dll by Windissect. 11 member(s).
namespace Microsoft::WRL {
class Details {
public:
    class ModuleBase;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z
    long GetCacheEntry(WindissectOpaque *, unsigned int *, _GUID const &, WindissectOpaque const *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownDecrementReference(long volatile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownIncrementReference(long volatile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z
    bool TerminateMap(WindissectOpaque *, unsigned short const *, bool);
};
} // namespace Microsoft::WRL
