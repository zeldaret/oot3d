#ifndef _Z_OBJ_MURE_H_
#define _Z_OBJ_MURE_H_

#include "global.hpp"

struct ObjMure;

typedef struct ObjMure {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x60];
} ObjMure; // size = 0x204

extern ActorInit Obj_Mure_InitVars;

#endif
