#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmapi.dll by Windissect. 6 member(s).
class CDwmHwndData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowCleanupHook@CDwmHwndData@@SAJXZ
    static long EnsureWindowCleanupHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindElement@CDwmHwndData@@SAPEAV1@PEAUHWND__@@@Z
    static CDwmHwndData * FindElement(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertElement@CDwmHwndData@@SAJPEAUHWND__@@PEAPEAV1@@Z
    static long InsertElement(HWND__*, CDwmHwndData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveElement@CDwmHwndData@@SAHPEAUHWND__@@@Z
    static int RemoveElement(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowCleanupHook@CDwmHwndData@@SAXXZ
    static void RemoveWindowCleanupHook();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WinEventCallback@CDwmHwndData@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z
    static void WinEventCallback(HWINEVENTHOOK__*, unsigned long, HWND__*, long, long, unsigned long, unsigned long);
};
