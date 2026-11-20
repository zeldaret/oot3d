#include "global.hpp"

GLOBAL_ASM("data/data_4F9000.s")

Color_RGBA8 gWhiteColor __attribute__((section(".data_50C924"))) = { 255, 255, 255, 255 };

GLOBAL_ASM("data/data_50C928.s")

GameInfo* gGameInfo __attribute__((section(".data_51b2f4"))) = NULL;

extern "C" {
void IChain_Apply_u8(Actor*, InitChainEntry*);
void IChain_Apply_s8(Actor*, InitChainEntry*);
void IChain_Apply_u16(Actor*, InitChainEntry*);
void IChain_Apply_s16(Actor*, InitChainEntry*);
void IChain_Apply_u32(Actor*, InitChainEntry*);
void IChain_Apply_s32(Actor*, InitChainEntry*);
void IChain_Apply_f32(Actor*, InitChainEntry*);
void IChain_Apply_f32div1000(Actor*, InitChainEntry*);
void IChain_Apply_Vec3f(Actor*, InitChainEntry*);
void IChain_Apply_Vec3fdiv1000(Actor*, InitChainEntry*);
void IChain_Apply_Vec3s(Actor*, InitChainEntry*);
}

typedef void (*IChainHandler)(Actor* actor, InitChainEntry* chain);

IChainHandler sIChainHandlers[] __attribute__((section(".sIChainHandlers"))) = {
    IChain_Apply_u8, IChain_Apply_s8, IChain_Apply_u16, IChain_Apply_s16, IChain_Apply_u32,
    IChain_Apply_s32, IChain_Apply_f32, IChain_Apply_f32div1000, IChain_Apply_Vec3f,
    IChain_Apply_Vec3fdiv1000, IChain_Apply_Vec3s,
};

GLOBAL_ASM("data/data_5321A0.s")

GLOBAL_ASM("data/data_51B2F8.s")

GLOBAL_ASM("data/data_5311B8.s")

GLOBAL_ASM("data/data_531AF4.s")

GLOBAL_ASM("data/data_531EB4.s")

GLOBAL_ASM("data/data_532518.s")

GLOBAL_ASM("data/data_534C54.s")

GLOBAL_ASM("data/data_53603C.s")

GLOBAL_ASM("data/data_53CAE4.s")

GLOBAL_ASM("data/data_53CC7C.s")

GLOBAL_ASM("data/data_5495F4.s")

GLOBAL_ASM("data/data_54A9C4.s")

f32 FLOAT_0054ac20 __attribute__((section(".data_54ac20"))) = 1.0f;

DAT_0054ac24_struct DAT_0054ac24 __attribute__((section(".data_54ac24"))) = { 0, 0, 0 };

GLOBAL_ASM("data/data_54AC28.s")
