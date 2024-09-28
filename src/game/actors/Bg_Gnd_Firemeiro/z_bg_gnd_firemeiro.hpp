#ifndef _Z_BG_GND_FIREMEIRO_H_
#define _Z_BG_GND_FIREMEIRO_H_

#include "global.hpp"

struct BgGndFiremeiro;

typedef struct BgGndFiremeiro {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x30];
} BgGndFiremeiro; // size = 0x1D4

extern ActorInit Bg_Gnd_Firemeiro_InitVars;

#endif
