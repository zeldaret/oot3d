#ifndef _Z_DEMO_IK_H_
#define _Z_DEMO_IK_H_

#include "global.hpp"

struct DemoIk;

typedef struct DemoIk {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x164];
} DemoIk; // size = 0x308

extern ActorInit Demo_Ik_InitVars;

#endif
