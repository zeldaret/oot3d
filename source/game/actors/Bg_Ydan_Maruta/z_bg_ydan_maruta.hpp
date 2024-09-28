#ifndef _Z_BG_YDAN_MARUTA_H_
#define _Z_BG_YDAN_MARUTA_H_

#include "global.hpp"

struct BgYdanMaruta;

typedef struct BgYdanMaruta {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xFC];
} BgYdanMaruta; // size = 0x2A0

extern ActorInit Bg_Ydan_Maruta_InitVars;

#endif
