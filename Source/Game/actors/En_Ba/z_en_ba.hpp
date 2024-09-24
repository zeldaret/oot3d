#ifndef _Z_EN_BA_H_
#define _Z_EN_BA_H_

#include "global.hpp"

struct EnBa;

typedef struct EnBa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xAA8];
} EnBa; // size = 0xC4C

extern ActorInit En_Ba_InitVars;

#endif
