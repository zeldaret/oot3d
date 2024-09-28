#ifndef _Z_OBJECT_KANKYO_H_
#define _Z_OBJECT_KANKYO_H_

#include "global.hpp"

struct ObjectKankyo;

typedef struct ObjectKankyo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1718];
} ObjectKankyo; // size = 0x18BC

extern ActorInit Object_Kankyo_InitVars;

#endif
