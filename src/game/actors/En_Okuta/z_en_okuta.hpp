#ifndef _Z_EN_OKUTA_H_
#define _Z_EN_OKUTA_H_

#include "global.hpp"

struct EnOkuta;

typedef struct EnOkuta {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x778];
} EnOkuta; // size = 0x91C

extern ActorInit En_Okuta_InitVars;

#endif
