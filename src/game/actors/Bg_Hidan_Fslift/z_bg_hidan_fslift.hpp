#ifndef _Z_BG_HIDAN_FSLIFT_H_
#define _Z_BG_HIDAN_FSLIFT_H_

#include "global.hpp"

struct BgHidanFslift;

typedef struct BgHidanFslift {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgHidanFslift; // size = 0x1C8

extern ActorInit Bg_Hidan_Fslift_InitVars;

#endif
