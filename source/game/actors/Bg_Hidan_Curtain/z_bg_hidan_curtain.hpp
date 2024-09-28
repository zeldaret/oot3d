#ifndef _Z_BG_HIDAN_CURTAIN_H_
#define _Z_BG_HIDAN_CURTAIN_H_

#include "global.hpp"

struct BgHidanCurtain;

typedef struct BgHidanCurtain {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x68];
} BgHidanCurtain; // size = 0x20C

extern ActorInit Bg_Hidan_Curtain_InitVars;

#endif
