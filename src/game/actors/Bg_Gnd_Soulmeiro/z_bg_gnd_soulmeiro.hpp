#ifndef _Z_BG_GND_SOULMEIRO_H_
#define _Z_BG_GND_SOULMEIRO_H_

#include "global.hpp"

struct BgGndSoulmeiro;

typedef struct BgGndSoulmeiro {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x64];
} BgGndSoulmeiro; // size = 0x208

extern ActorInit Bg_Gnd_Soulmeiro_InitVars;

#endif
