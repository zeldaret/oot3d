#ifndef _Z_BG_DDAN_KD_H_
#define _Z_BG_DDAN_KD_H_

#include "global.hpp"

struct BgDdanKd;

typedef struct BgDdanKd {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8C];
} BgDdanKd; // size = 0x230

extern ActorInit Bg_Ddan_Kd_InitVars;

#endif
