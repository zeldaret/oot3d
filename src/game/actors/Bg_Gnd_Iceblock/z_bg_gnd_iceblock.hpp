#ifndef _Z_BG_GND_ICEBLOCK_H_
#define _Z_BG_GND_ICEBLOCK_H_

#include "global.hpp"

struct BgGndIceblock;

typedef struct BgGndIceblock {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2C];
} BgGndIceblock; // size = 0x1D0

extern ActorInit Bg_Gnd_Iceblock_InitVars;

#endif
