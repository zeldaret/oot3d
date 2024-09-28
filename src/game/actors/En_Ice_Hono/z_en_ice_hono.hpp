#ifndef _Z_EN_ICE_HONO_H_
#define _Z_EN_ICE_HONO_H_

#include "global.hpp"

struct EnIceHono;

typedef struct EnIceHono {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x88];
} EnIceHono; // size = 0x22C

extern ActorInit En_Ice_Hono_InitVars;

#endif
