#ifndef _Z_OBJ_BEAN_H_
#define _Z_OBJ_BEAN_H_

#include "global.hpp"

struct ObjBean;

typedef struct ObjBean {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC8];
} ObjBean; // size = 0x26C

extern ActorInit Obj_Bean_InitVars;

#endif
