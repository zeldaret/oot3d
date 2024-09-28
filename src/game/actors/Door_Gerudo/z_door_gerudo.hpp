#ifndef _Z_DOOR_GERUDO_H_
#define _Z_DOOR_GERUDO_H_

#include "global.hpp"

struct DoorGerudo;

typedef struct DoorGerudo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C];
} DoorGerudo; // size = 0x1E0

extern ActorInit Door_Gerudo_InitVars;

#endif
