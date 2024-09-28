#ifndef _Z_EN_A_OBJ_H_
#define _Z_EN_A_OBJ_H_

#include "global.hpp"

struct EnAObj;

typedef struct EnAObj {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x88];
} EnAObj; // size = 0x22C

extern ActorInit En_A_Obj_InitVars;

#endif
