#ifndef _Z_BG_HIDAN_SIMA_H_
#define _Z_BG_HIDAN_SIMA_H_

#include "global.hpp"

struct BgHidanSima;

typedef struct BgHidanSima {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xFC];
} BgHidanSima; // size = 0x2A0

extern ActorInit Bg_Hidan_Sima_InitVars;

#endif
