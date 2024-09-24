#ifndef _Z_EN_OKARINA_EFFECT_H_
#define _Z_EN_OKARINA_EFFECT_H_

#include "global.hpp"

struct EnOkarinaEffect;

typedef struct EnOkarinaEffect {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8];
} EnOkarinaEffect; // size = 0x1AC

extern ActorInit En_Okarina_Effect_InitVars;

#endif
