#ifndef _Z_BG_HAKA_MEGANE_H_
#define _Z_BG_HAKA_MEGANE_H_

#include "global.hpp"

struct BgHakaMegane;

typedef struct BgHakaMegane {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgHakaMegane; // size = 0x1CC

extern ActorInit Bg_Haka_Megane_InitVars;

#endif
