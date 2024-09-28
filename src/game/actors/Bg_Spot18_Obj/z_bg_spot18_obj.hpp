#ifndef _Z_BG_SPOT18_OBJ_H_
#define _Z_BG_SPOT18_OBJ_H_

#include "global.hpp"

struct BgSpot18Obj;

typedef struct BgSpot18Obj {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgSpot18Obj; // size = 0x1C8

extern ActorInit Bg_Spot18_Obj_InitVars;

#endif
