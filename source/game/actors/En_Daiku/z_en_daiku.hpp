#ifndef _Z_EN_DAIKU_H_
#define _Z_EN_DAIKU_H_

#include "global.hpp"

struct EnDaiku;

typedef struct EnDaiku {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA50];
} EnDaiku; // size = 0xBF4

extern ActorInit En_Daiku_InitVars;

#endif
