#ifndef _Z_OBJ_KIBAKO_H_
#define _Z_OBJ_KIBAKO_H_

#include "global.hpp"

struct ObjKibako;

typedef struct ObjKibako {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x68];
} ObjKibako; // size = 0x20C

extern ActorInit Obj_Kibako_InitVars;

#endif
