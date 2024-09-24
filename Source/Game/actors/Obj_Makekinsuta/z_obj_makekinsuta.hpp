#ifndef _Z_OBJ_MAKEKINSUTA_H_
#define _Z_OBJ_MAKEKINSUTA_H_

#include "global.hpp"

struct ObjMakekinsuta;

typedef struct ObjMakekinsuta {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8];
} ObjMakekinsuta; // size = 0x1AC

extern ActorInit Obj_Makekinsuta_InitVars;

#endif
