#ifndef _Z_BG_SPOT06_OBJECTS_H_
#define _Z_BG_SPOT06_OBJECTS_H_

#include "global.hpp"

struct BgSpot06Objects;

typedef struct BgSpot06Objects {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA4];
} BgSpot06Objects; // size = 0x248

extern ActorInit Bg_Spot06_Objects_InitVars;

#endif
