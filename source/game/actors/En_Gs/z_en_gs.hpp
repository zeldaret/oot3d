#ifndef _Z_EN_GS_H_
#define _Z_EN_GS_H_

#include "global.hpp"

struct EnGs;

typedef struct EnGs {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xE0];
} EnGs; // size = 0x284

extern ActorInit En_Gs_InitVars;

#endif
