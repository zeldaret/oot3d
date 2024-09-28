#ifndef _Z_OBJ_ROOMTIMER_H_
#define _Z_OBJ_ROOMTIMER_H_

#include "global.hpp"

struct ObjRoomtimer;

typedef struct ObjRoomtimer {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8];
} ObjRoomtimer; // size = 0x1AC

extern ActorInit Obj_Roomtimer_InitVars;

#endif
