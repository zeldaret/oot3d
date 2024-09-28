#ifndef _Z_OBJ_TIMEBLOCK_H_
#define _Z_OBJ_TIMEBLOCK_H_

#include "global.hpp"

struct ObjTimeblock;

typedef struct ObjTimeblock {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x34];
} ObjTimeblock; // size = 0x1D8

extern ActorInit Obj_Timeblock_InitVars;

#endif
