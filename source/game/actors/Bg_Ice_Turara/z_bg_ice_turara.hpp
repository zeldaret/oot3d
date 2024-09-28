#ifndef _Z_BG_ICE_TURARA_H_
#define _Z_BG_ICE_TURARA_H_

#include "global.hpp"

struct BgIceTurara;

typedef struct BgIceTurara {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7C];
} BgIceTurara; // size = 0x220

extern ActorInit Bg_Ice_Turara_InitVars;

#endif
