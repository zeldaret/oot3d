#ifndef _Z_BG_SPOT09_OBJ_H_
#define _Z_BG_SPOT09_OBJ_H_

#include "global.hpp"

struct BgSpot09Obj;

typedef struct BgSpot09Obj {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x34];
} BgSpot09Obj; // size = 0x1D8

extern ActorInit Bg_Spot09_Obj_InitVars;

#endif
