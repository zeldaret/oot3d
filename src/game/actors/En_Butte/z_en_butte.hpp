#ifndef _Z_EN_BUTTE_H_
#define _Z_EN_BUTTE_H_

#include "global.hpp"

struct EnButte;

typedef struct EnButte {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24C];
} EnButte; // size = 0x3F0

extern ActorInit En_Butte_InitVars;

#endif
