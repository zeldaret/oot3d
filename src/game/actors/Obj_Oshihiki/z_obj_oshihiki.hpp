#ifndef _Z_OBJ_OSHIHIKI_H_
#define _Z_OBJ_OSHIHIKI_H_

#include "global.hpp"

struct ObjOshihiki;

typedef struct ObjOshihiki {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8C];
} ObjOshihiki; // size = 0x230

extern ActorInit Obj_Oshihiki_InitVars;

#endif
