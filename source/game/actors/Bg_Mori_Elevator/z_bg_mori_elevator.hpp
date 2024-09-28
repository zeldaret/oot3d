#ifndef _Z_BG_MORI_ELEVATOR_H_
#define _Z_BG_MORI_ELEVATOR_H_

#include "global.hpp"

struct BgMoriElevator;

typedef struct BgMoriElevator {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x34];
} BgMoriElevator; // size = 0x1D8

extern ActorInit Bg_Mori_Elevator_InitVars;

#endif
