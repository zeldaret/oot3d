#ifndef _Z_DOOR_WARP1_H_
#define _Z_DOOR_WARP1_H_

#include "global.hpp"

struct DoorWarp1;

typedef struct DoorWarp1 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x32C];
} DoorWarp1; // size = 0x4D0

extern ActorInit Door_Warp1_InitVars;

#endif
