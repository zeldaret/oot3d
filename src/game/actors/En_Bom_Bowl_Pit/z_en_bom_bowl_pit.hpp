#ifndef _Z_EN_BOM_BOWL_PIT_H_
#define _Z_EN_BOM_BOWL_PIT_H_

#include "global.hpp"

struct EnBomBowlPit;

typedef struct EnBomBowlPit {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x98];
} EnBomBowlPit; // size = 0x23C

extern ActorInit En_Bom_Bowl_Pit_InitVars;

#endif
