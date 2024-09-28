#pragma once

extern "C" {
#include "functions.hpp"
}

#include "non_matchings.hpp"

namespace z3D {

class Class_4EBE18 {
public:
    Class_4EBE18();

    virtual ~Class_4EBE18() {}
    virtual void FUN_00417240(void* address, size_t size);
    virtual void vfptr_4EBE2C() {}
    virtual void vfptr_4EBE30() {}
    virtual void vfptr_4EBE34(s32, s32) {}
    virtual bool FUN_003fbcf8(void* address, size_t size);

    void FUN_003119b4(s32, s32, s32, s32, s32, s32);

    s8 unk_04;
    s8 unk_05;
    u32 cmdListID; // 08
    u32 displayBufferIDs1[2]; // 0C
    u32 displayBufferIDs2[2]; // 14
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[0x18];
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
};

} // namespace z3D
