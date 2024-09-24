#ifndef _Z_BG_SPOT12_SAKU_H_
#define _Z_BG_SPOT12_SAKU_H_

#include "global.hpp"

struct BgSpot12Saku;

typedef struct BgSpot12Saku {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgSpot12Saku; // size = 0x1C8

extern ActorInit Bg_Spot12_Saku_InitVars;

#endif
