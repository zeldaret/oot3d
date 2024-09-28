#ifndef _Z_EN_HORSE_ZELDA_H_
#define _Z_EN_HORSE_ZELDA_H_

#include "global.hpp"

struct EnHorseZelda;

typedef struct EnHorseZelda {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x178];
} EnHorseZelda; // size = 0x31C

extern ActorInit En_Horse_Zelda_InitVars;

#endif
