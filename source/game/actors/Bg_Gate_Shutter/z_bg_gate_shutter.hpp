#ifndef _Z_BG_GATE_SHUTTER_H_
#define _Z_BG_GATE_SHUTTER_H_

#include "global.hpp"

struct BgGateShutter;

typedef struct BgGateShutter {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x34];
} BgGateShutter; // size = 0x1D8

extern ActorInit Bg_Gate_Shutter_InitVars;

#endif
