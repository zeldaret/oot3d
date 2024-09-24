#ifndef _Z_EN_GANON_ORGAN_H_
#define _Z_EN_GANON_ORGAN_H_

#include "global.hpp"

struct EnGanonOrgan;

typedef struct EnGanonOrgan {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8];
} EnGanonOrgan; // size = 0x1AC

extern ActorInit En_Ganon_Organ_InitVars;

#endif
