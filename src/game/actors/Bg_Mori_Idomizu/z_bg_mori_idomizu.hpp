#ifndef _Z_BG_MORI_IDOMIZU_H_
#define _Z_BG_MORI_IDOMIZU_H_

#include "global.hpp"

struct BgMoriIdomizu;

typedef struct BgMoriIdomizu {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x18];
} BgMoriIdomizu; // size = 0x1BC

extern ActorInit Bg_Mori_Idomizu_InitVars;

#endif
