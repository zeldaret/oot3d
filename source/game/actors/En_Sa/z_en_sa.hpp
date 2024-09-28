#ifndef _Z_EN_SA_H_
#define _Z_EN_SA_H_

#include "global.hpp"

struct EnSa;

typedef struct EnSa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xAA8];
} EnSa; // size = 0xC4C

extern ActorInit En_Sa_InitVars;

#endif
