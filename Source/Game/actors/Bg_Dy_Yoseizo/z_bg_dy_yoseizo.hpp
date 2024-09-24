#ifndef _Z_BG_DY_YOSEIZO_H_
#define _Z_BG_DY_YOSEIZO_H_

#include "global.hpp"

struct BgDyYoseizo;

typedef struct BgDyYoseizo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x48D0];
} BgDyYoseizo; // size = 0x4A74

extern ActorInit Bg_Dy_Yoseizo_InitVars;

#endif
