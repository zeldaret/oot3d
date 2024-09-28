#ifndef _Z_BG_SPOT12_GATE_H_
#define _Z_BG_SPOT12_GATE_H_

#include "global.hpp"

struct BgSpot12Gate;

typedef struct BgSpot12Gate {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgSpot12Gate; // size = 0x1C8

extern ActorInit Bg_Spot12_Gate_InitVars;

#endif
