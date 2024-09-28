#ifndef _Z_OBJ_SYOKUDAI_H_
#define _Z_OBJ_SYOKUDAI_H_

#include "global.hpp"

struct ObjSyokudai;

typedef struct ObjSyokudai {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xE0];
} ObjSyokudai; // size = 0x284

extern ActorInit Obj_Syokudai_InitVars;

#endif
