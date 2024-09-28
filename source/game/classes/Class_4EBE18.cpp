#include "Class_4EBE18.h"

#include <nn/gx/gx.h>
#include <nn/dbg/dbg.h>

extern "C" {
void* FUN_002a8bdc(s32, s32, s32, s32);
void* FUN_00381434(s32, s32, s32, void*);
}

GLOBAL_ASM("asm/FUN_002a8bdc.s")
GLOBAL_ASM("asm/FUN_00381434.s")

namespace z3D {

Class_4EBE18::Class_4EBE18() {
    cmdListID = 0;
    unk_1C = 0;
    unk_20 = 0;
    unk_24 = 0;
    unk_04 = 0;
    unk_05 = 1;
}

bool Class_4EBE18::FUN_003fbcf8(void* address, size_t size) {
    if (unk_04 != '\0') {
        return false;
    }
    unk_04 = 1;
    FUN_00312fc4(address, size);
    if (!nngxInitialize(FUN_002a8bdc, FUN_00381434)) {
        nn::dbg::Panic();
    }
    nngxGenCmdlists(1, &cmdListID);
    nngxBindCmdlist(cmdListID);
    nngxCmdlistStorage(0x40000, 0x80);
    nngxSetCmdlistParameteri(NNGX_CMDLIST_PARAMETER_RUN_MODE, 0x300);
    nngxActiveDisplay(NNGX_DISPLAY_0);
    nngxGenDisplaybuffers(ARRAY_COUNT(displayBufferIDs1), displayBufferIDs1);
    FUN_00311c70(displayBufferIDs1[0]);
    nngxDisplaybufferStorage(0x8051, 240, 400, 0x10000);
    nngxGetDisplaybufferParameteri(NNGX_DISPLAY_BUFFER_ADDRESS, &unk_40);
    FUN_00311c70(displayBufferIDs1[1]);
    nngxDisplaybufferStorage(0x8051, 240, 400, 0x10000);
    nngxGetDisplaybufferParameteri(NNGX_DISPLAY_BUFFER_ADDRESS, &unk_44);
    nngxDisplayEnv(0, 0);
    FUN_00311c70(0);
    unk_1C = 0;
    nngxActiveDisplay(NNGX_DISPLAY_1);
    nngxGenDisplaybuffers(ARRAY_COUNT(displayBufferIDs2), displayBufferIDs2);
    FUN_00311c70(displayBufferIDs2[0]);
    nngxDisplaybufferStorage(0x8051, 240, 320, 0x10000);
    nngxGetDisplaybufferParameteri(NNGX_DISPLAY_BUFFER_ADDRESS, &unk_48);
    FUN_00311c70(displayBufferIDs2[1]);
    nngxDisplaybufferStorage(0x8051, 240, 320, 0x10000);
    nngxGetDisplaybufferParameteri(NNGX_DISPLAY_BUFFER_ADDRESS, &unk_4C);
    nngxDisplayEnv(0, 0);
    FUN_00311c70(0);
    unk_20 = 0;
    FUN_003119b4(0x8058, 240, 400, 0x8058, 240, 320);
    nngxRunCmdlist();
    return true;
}

void Class_4EBE18::FUN_00417240(void* address, size_t size) {
    FUN_003fbcf8(address, size);
}

} // namespace z3D

GLOBAL_ASM("asm/_ZN3z3D12Class_4EBE1812FUN_003119b4Eiiiiii.s")
