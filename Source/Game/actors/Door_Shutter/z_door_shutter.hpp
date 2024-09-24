#ifndef _Z_DOOR_SHUTTER_H_
#define _Z_DOOR_SHUTTER_H_

#include "global.hpp"

struct DoorShutter;

typedef struct DoorShutter {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7C];
} DoorShutter; // size = 0x220

extern ActorInit Door_Shutter_InitVars;

#endif
