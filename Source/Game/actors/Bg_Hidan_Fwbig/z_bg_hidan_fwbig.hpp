#ifndef _Z_BG_HIDAN_FWBIG_H_
#define _Z_BG_HIDAN_FWBIG_H_

#include "global.hpp"

struct BgHidanFwbig;

typedef struct BgHidanFwbig {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x64];
} BgHidanFwbig; // size = 0x208

extern ActorInit Bg_Hidan_Fwbig_InitVars;

#endif
