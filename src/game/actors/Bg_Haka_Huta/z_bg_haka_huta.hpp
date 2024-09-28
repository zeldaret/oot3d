#ifndef _Z_BG_HAKA_HUTA_H_
#define _Z_BG_HAKA_HUTA_H_

#include "global.hpp"

struct BgHakaHuta;

typedef struct BgHakaHuta {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgHakaHuta; // size = 0x1CC

extern ActorInit Bg_Haka_Huta_InitVars;

#endif
