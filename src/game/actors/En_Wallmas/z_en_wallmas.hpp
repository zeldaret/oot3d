#ifndef _Z_EN_WALLMAS_H_
#define _Z_EN_WALLMAS_H_

#include "global.hpp"

struct EnWallmas;

typedef struct EnWallmas {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6A0];
} EnWallmas; // size = 0x844

extern ActorInit En_Wallmas_InitVars;

#endif
