#ifndef _Z_BG_HIDAN_DALM_H_
#define _Z_BG_HIDAN_DALM_H_

#include "global.hpp"

struct BgHidanDalm;

typedef struct BgHidanDalm {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1B8];
} BgHidanDalm; // size = 0x35C

extern ActorInit Bg_Hidan_Dalm_InitVars;

#endif
