#ifndef _Z_OBJ_HSBLOCK_H_
#define _Z_OBJ_HSBLOCK_H_

#include "global.hpp"

struct ObjHsblock;

typedef struct ObjHsblock {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} ObjHsblock; // size = 0x1C8

extern ActorInit Obj_Hsblock_InitVars;

#endif
