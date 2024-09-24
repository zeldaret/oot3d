#ifndef _Z_DEMO_GJ_H_
#define _Z_DEMO_GJ_H_

#include "global.hpp"

struct DemoGj;

typedef struct DemoGj {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x170];
} DemoGj; // size = 0x314

extern ActorInit Demo_Gj_InitVars;

#endif
