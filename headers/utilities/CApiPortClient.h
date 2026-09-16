#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmapi.dll by Windissect. 10 member(s).
class CApiPortClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockExtraDataPointer@CApiPortClient@@QEAAJIPEAPEAX@Z
    long LockExtraDataPointer(unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z
    long SendNotification(void *, short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z
    long SendRequest(void const *, short, long *, void *, short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z
    long SendRequest(void const *, short, void *, unsigned int, long *, void *, short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockExtraDataPointer@CApiPortClient@@QEAAXPEAX@Z
    void UnlockExtraDataPointer(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApiPortClient@@QEAA@XZ
    ~CApiPortClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureConnected@CApiPortClient@@AEAAJXZ
    long EnsureConnected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@CApiPortClient@@AEAA_NXZ
    bool IsConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate@CApiPortClient@@CAJJ@Z
    static long Translate(long);
};
