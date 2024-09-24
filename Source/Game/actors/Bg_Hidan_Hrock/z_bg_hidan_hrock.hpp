#ifndef _Z_BG_HIDAN_HROCK_H_
#define _Z_BG_HIDAN_HROCK_H_

#include "global.hpp"

struct BgHidanHrock;

typedef struct BgHidanHrock {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xFC];
} BgHidanHrock; // size = 0x2A0

extern ActorInit Bg_Hidan_Hrock_InitVars;

#endif
