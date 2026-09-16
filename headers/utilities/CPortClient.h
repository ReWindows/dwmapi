#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmapi.dll by Windissect. 9 member(s).
class CPortClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireExtraData@CPortClient@@QEAAJIPEAPEAX@Z
    long AcquireExtraData(unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectWithName@CPortClient@@QEAAJPEBG@Z
    long ConnectWithName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@CPortClient@@QEAAXXZ
    void Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z
    long SendComplexAsyncRequest(unsigned long, void const *, short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z
    long SendComplexSyncRequest(unsigned long, void const *, short, void *, unsigned int, void *, short, long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPortClient@@UEAA@XZ
    virtual ~CPortClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckStatus@CPortClient@@AEAAJJ@Z
    long CheckStatus(long);
};
