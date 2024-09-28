#ifndef _Z_BG_BREAKWALL_H_
#define _Z_BG_BREAKWALL_H_

#include "global.hpp"

struct BgBreakwall;

typedef struct BgBreakwall {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA4];
} BgBreakwall; // size = 0x248

extern ActorInit Bg_Breakwall_InitVars;

#endif
