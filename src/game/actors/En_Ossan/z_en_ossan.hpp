#ifndef _Z_EN_OSSAN_H_
#define _Z_EN_OSSAN_H_

#include "global.hpp"

struct EnOssan;

typedef struct EnOssan {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3E0];
} EnOssan; // size = 0x584

extern ActorInit En_Ossan_InitVars;

#endif
