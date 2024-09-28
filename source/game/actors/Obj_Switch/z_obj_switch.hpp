#ifndef _Z_OBJ_SWITCH_H_
#define _Z_OBJ_SWITCH_H_

#include "global.hpp"

struct ObjSwitch;

typedef struct ObjSwitch {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x420];
} ObjSwitch; // size = 0x5C4

extern ActorInit Obj_Switch_InitVars;

#endif
