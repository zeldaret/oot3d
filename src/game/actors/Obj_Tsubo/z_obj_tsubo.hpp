#ifndef _Z_OBJ_TSUBO_H_
#define _Z_OBJ_TSUBO_H_

#include "global.hpp"

struct ObjTsubo;

typedef struct ObjTsubo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x64];
} ObjTsubo; // size = 0x208

extern ActorInit Obj_Tsubo_InitVars;

#endif
