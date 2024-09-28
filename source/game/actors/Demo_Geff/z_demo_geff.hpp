#ifndef _Z_DEMO_GEFF_H_
#define _Z_DEMO_GEFF_H_

#include "global.hpp"

struct DemoGeff;

typedef struct DemoGeff {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} DemoGeff; // size = 0x1C4

extern ActorInit Demo_Geff_InitVars;

#endif
