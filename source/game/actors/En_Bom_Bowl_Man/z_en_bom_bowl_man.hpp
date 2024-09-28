#ifndef _Z_EN_BOM_BOWL_MAN_H_
#define _Z_EN_BOM_BOWL_MAN_H_

#include "global.hpp"

struct EnBomBowlMan;

typedef struct EnBomBowlMan {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6B4];
} EnBomBowlMan; // size = 0x858

extern ActorInit En_Bom_Bowl_Man_InitVars;

#endif
