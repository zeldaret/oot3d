#ifndef _Z_BG_BOM_GUARD_H_
#define _Z_BG_BOM_GUARD_H_

#include "global.hpp"

struct BgBomGuard;

typedef struct BgBomGuard {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2C];
} BgBomGuard; // size = 0x1D0

extern ActorInit Bg_Bom_Guard_InitVars;

#endif
