#ifndef _Z_EN_GANON_MANT_H_
#define _Z_EN_GANON_MANT_H_

#include "global.hpp"

struct EnGanonMant;

typedef struct EnGanonMant {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1640];
} EnGanonMant; // size = 0x17E4

extern ActorInit En_Ganon_Mant_InitVars;

#endif
