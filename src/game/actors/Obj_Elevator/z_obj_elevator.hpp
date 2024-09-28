#ifndef _Z_OBJ_ELEVATOR_H_
#define _Z_OBJ_ELEVATOR_H_

#include "global.hpp"

struct ObjElevator;

typedef struct ObjElevator {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2C];
} ObjElevator; // size = 0x1D0

extern ActorInit Obj_Elevator_InitVars;

#endif
