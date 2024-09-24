#ifndef _Z_EN_DOOR_H_
#define _Z_EN_DOOR_H_

#include "global.hpp"

struct EnDoor;

typedef struct EnDoor {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24C];
} EnDoor; // size = 0x3F0

extern ActorInit En_Door_InitVars;

#endif
