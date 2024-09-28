#ifndef _Z_DEMO_GT_H_
#define _Z_DEMO_GT_H_

#include "global.hpp"

struct DemoGt;

typedef struct DemoGt {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x78];
} DemoGt; // size = 0x21C

extern ActorInit Demo_Gt_InitVars;

#endif
