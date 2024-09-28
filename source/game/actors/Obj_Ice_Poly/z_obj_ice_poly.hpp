#ifndef _Z_OBJ_ICE_POLY_H_
#define _Z_OBJ_ICE_POLY_H_

#include "global.hpp"

struct ObjIcePoly;

typedef struct ObjIcePoly {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xBC];
} ObjIcePoly; // size = 0x260

extern ActorInit Obj_Ice_Poly_InitVars;

#endif
