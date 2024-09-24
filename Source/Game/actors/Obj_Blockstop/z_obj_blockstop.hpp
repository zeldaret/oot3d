#ifndef _Z_OBJ_BLOCKSTOP_H_
#define _Z_OBJ_BLOCKSTOP_H_

#include "global.hpp"

struct ObjBlockstop;

typedef struct ObjBlockstop {
    /* 0x0000 */ Actor actor;
} ObjBlockstop; // size = 0x1A4

extern ActorInit Obj_Blockstop_InitVars;

#endif
