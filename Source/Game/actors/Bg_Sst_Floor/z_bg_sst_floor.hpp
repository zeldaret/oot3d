#ifndef _Z_BG_SST_FLOOR_H_
#define _Z_BG_SST_FLOOR_H_

#include "global.hpp"

struct BgSstFloor;

typedef struct BgSstFloor {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgSstFloor; // size = 0x1CC

extern ActorInit Bg_Sst_Floor_InitVars;

#endif
