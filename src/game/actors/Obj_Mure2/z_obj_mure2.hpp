#ifndef _Z_OBJ_MURE2_H_
#define _Z_OBJ_MURE2_H_

#include "global.hpp"

struct ObjMure2;

typedef struct ObjMure2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C];
} ObjMure2; // size = 0x1E0

extern ActorInit Obj_Mure2_InitVars;

#endif
