#ifndef _Z_BG_BDAN_OBJECTS_H_
#define _Z_BG_BDAN_OBJECTS_H_

#include "global.hpp"

struct BgBdanObjects;

typedef struct BgBdanObjects {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x90];
} BgBdanObjects; // size = 0x234

extern ActorInit Bg_Bdan_Objects_InitVars;

#endif
