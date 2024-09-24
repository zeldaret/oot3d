#ifndef _Z_DOOR_TOKI_H_
#define _Z_DOOR_TOKI_H_

#include "global.hpp"

struct DoorToki;

typedef struct DoorToki {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} DoorToki; // size = 0x1C0

extern ActorInit Door_Toki_InitVars;

#endif
