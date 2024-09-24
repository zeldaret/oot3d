#ifndef _Z_BG_ICE_SHELTER_H_
#define _Z_BG_ICE_SHELTER_H_

#include "global.hpp"

struct BgIceShelter;

typedef struct BgIceShelter {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xDC];
} BgIceShelter; // size = 0x280

extern ActorInit Bg_Ice_Shelter_InitVars;

#endif
