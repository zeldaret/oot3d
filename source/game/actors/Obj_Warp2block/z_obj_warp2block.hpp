#ifndef _Z_OBJ_WARP2BLOCK_H_
#define _Z_OBJ_WARP2BLOCK_H_

#include "global.hpp"

struct ObjWarp2block;

typedef struct ObjWarp2block {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x30];
} ObjWarp2block; // size = 0x1D4

extern ActorInit Obj_Warp2block_InitVars;

#endif
