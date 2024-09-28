#ifndef _Z_DOOR_KILLER_H_
#define _Z_DOOR_KILLER_H_

#include "global.hpp"

struct DoorKiller;

typedef struct DoorKiller {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x83C];
} DoorKiller; // size = 0x9E0

extern ActorInit Door_Killer_InitVars;

#endif
