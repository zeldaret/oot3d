#ifndef _Z_OBJ_LIFT_H_
#define _Z_OBJ_LIFT_H_

#include "global.hpp"

struct ObjLift;

typedef struct ObjLift {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} ObjLift; // size = 0x1CC

extern ActorInit Obj_Lift_InitVars;

#endif
