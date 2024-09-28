#ifndef _Z_BG_DODOAGO_H_
#define _Z_BG_DODOAGO_H_

#include "global.hpp"

struct BgDodoago;

typedef struct BgDodoago {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x12C];
} BgDodoago; // size = 0x2D0

extern ActorInit Bg_Dodoago_InitVars;

#endif
