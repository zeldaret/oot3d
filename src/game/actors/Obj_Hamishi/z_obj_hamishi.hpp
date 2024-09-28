#ifndef _Z_OBJ_HAMISHI_H_
#define _Z_OBJ_HAMISHI_H_

#include "global.hpp"

struct ObjHamishi;

typedef struct ObjHamishi {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6C];
} ObjHamishi; // size = 0x210

extern ActorInit Obj_Hamishi_InitVars;

#endif
