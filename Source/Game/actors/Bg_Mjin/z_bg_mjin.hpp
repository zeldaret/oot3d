#ifndef _Z_BG_MJIN_H_
#define _Z_BG_MJIN_H_

#include "global.hpp"

struct BgMjin;

typedef struct BgMjin {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgMjin; // size = 0x1C8

extern ActorInit Bg_Mjin_InitVars;

#endif
