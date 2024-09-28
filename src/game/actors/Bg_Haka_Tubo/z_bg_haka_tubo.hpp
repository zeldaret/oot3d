#ifndef _Z_BG_HAKA_TUBO_H_
#define _Z_BG_HAKA_TUBO_H_

#include "global.hpp"

struct BgHakaTubo;

typedef struct BgHakaTubo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xD8];
} BgHakaTubo; // size = 0x27C

extern ActorInit Bg_Haka_Tubo_InitVars;

#endif
