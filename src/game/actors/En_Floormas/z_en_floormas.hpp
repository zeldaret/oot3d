#ifndef _Z_EN_FLOORMAS_H_
#define _Z_EN_FLOORMAS_H_

#include "global.hpp"

struct EnFloormas;

typedef struct EnFloormas {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x698];
} EnFloormas; // size = 0x83C

extern ActorInit En_Floormas_InitVars;

#endif
