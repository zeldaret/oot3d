#ifndef _Z_EN_NY_H_
#define _Z_EN_NY_H_

#include "global.hpp"

struct EnNy;

typedef struct EnNy {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x218];
} EnNy; // size = 0x3BC

extern ActorInit En_Ny_InitVars;

#endif
