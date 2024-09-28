#ifndef _Z_BG_TOKI_HIKARI_H_
#define _Z_BG_TOKI_HIKARI_H_

#include "global.hpp"

struct BgTokiHikari;

typedef struct BgTokiHikari {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} BgTokiHikari; // size = 0x1C4

extern ActorInit Bg_Toki_Hikari_InitVars;

#endif
