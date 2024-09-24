#ifndef _Z_OCEFF_SPOT_H_
#define _Z_OCEFF_SPOT_H_

#include "global.hpp"

struct OceffSpot;

typedef struct OceffSpot {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4C];
} OceffSpot; // size = 0x1F0

extern ActorInit Oceff_Spot_InitVars;

#endif
