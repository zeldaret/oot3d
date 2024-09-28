#ifndef _Z_OBJ_DEKUJR_H_
#define _Z_OBJ_DEKUJR_H_

#include "global.hpp"

struct ObjDekujr;

typedef struct ObjDekujr {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x220];
} ObjDekujr; // size = 0x3C4

extern ActorInit Obj_Dekujr_InitVars;

#endif
