#ifndef _Z_EN_HORSE_GANON_H_
#define _Z_EN_HORSE_GANON_H_

#include "global.hpp"

struct EnHorseGanon;

typedef struct EnHorseGanon {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x178];
} EnHorseGanon; // size = 0x31C

extern ActorInit En_Horse_Ganon_InitVars;

#endif
