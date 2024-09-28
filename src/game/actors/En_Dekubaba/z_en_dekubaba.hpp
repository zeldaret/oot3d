#ifndef _Z_EN_DEKUBABA_H_
#define _Z_EN_DEKUBABA_H_

#include "global.hpp"

struct EnDekubaba;

typedef struct EnDekubaba {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x468];
} EnDekubaba; // size = 0x60C

extern ActorInit En_Dekubaba_InitVars;

#endif
