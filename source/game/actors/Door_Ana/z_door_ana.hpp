#ifndef _Z_DOOR_ANA_H_
#define _Z_DOOR_ANA_H_

#include "global.hpp"

struct DoorAna;

typedef struct DoorAna {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x64];
} DoorAna; // size = 0x208

extern ActorInit Door_Ana_InitVars;

#endif
