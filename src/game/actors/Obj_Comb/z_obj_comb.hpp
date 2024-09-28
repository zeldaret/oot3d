#ifndef _Z_OBJ_COMB_H_
#define _Z_OBJ_COMB_H_

#include "global.hpp"

struct ObjComb;

typedef struct ObjComb {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7C];
} ObjComb; // size = 0x220

extern ActorInit Obj_Comb_InitVars;

#endif
