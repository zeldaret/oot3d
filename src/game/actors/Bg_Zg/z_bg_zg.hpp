#ifndef _Z_BG_ZG_H_
#define _Z_BG_ZG_H_

#include "global.hpp"

struct BgZg;

typedef struct BgZg {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgZg; // size = 0x1C8

extern ActorInit Bg_Zg_InitVars;

#endif
