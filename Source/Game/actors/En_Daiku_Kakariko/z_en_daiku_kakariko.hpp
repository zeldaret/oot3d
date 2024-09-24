#ifndef _Z_EN_DAIKU_KAKARIKO_H_
#define _Z_EN_DAIKU_KAKARIKO_H_

#include "global.hpp"

struct EnDaikuKakariko;

typedef struct EnDaikuKakariko {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA0C];
} EnDaikuKakariko; // size = 0xBB0

extern ActorInit En_Daiku_Kakariko_InitVars;

#endif
