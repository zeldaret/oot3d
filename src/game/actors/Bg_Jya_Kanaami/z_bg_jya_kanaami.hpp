#ifndef _Z_BG_JYA_KANAAMI_H_
#define _Z_BG_JYA_KANAAMI_H_

#include "global.hpp"

struct BgJyaKanaami;

typedef struct BgJyaKanaami {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgJyaKanaami; // size = 0x1C8

extern ActorInit Bg_Jya_Kanaami_InitVars;

#endif
