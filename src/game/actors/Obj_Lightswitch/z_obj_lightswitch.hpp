#ifndef _Z_OBJ_LIGHTSWITCH_H_
#define _Z_OBJ_LIGHTSWITCH_H_

#include "global.hpp"

struct ObjLightswitch;

typedef struct ObjLightswitch {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x260];
} ObjLightswitch; // size = 0x404

extern ActorInit Obj_Lightswitch_InitVars;

#endif
