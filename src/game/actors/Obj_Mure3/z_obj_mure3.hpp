#ifndef _Z_OBJ_MURE3_H_
#define _Z_OBJ_MURE3_H_

#include "global.hpp"

struct ObjMure3;

typedef struct ObjMure3 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} ObjMure3; // size = 0x1C8

extern ActorInit Obj_Mure3_InitVars;

#endif
