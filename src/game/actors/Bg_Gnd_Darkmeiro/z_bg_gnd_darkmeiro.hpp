#ifndef _Z_BG_GND_DARKMEIRO_H_
#define _Z_BG_GND_DARKMEIRO_H_

#include "global.hpp"

struct BgGndDarkmeiro;

typedef struct BgGndDarkmeiro {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x38];
} BgGndDarkmeiro; // size = 0x1DC

extern ActorInit Bg_Gnd_Darkmeiro_InitVars;

#endif
