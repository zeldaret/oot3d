#ifndef _Z_DEMO_IM_H_
#define _Z_DEMO_IM_H_

#include "global.hpp"

struct DemoIm;

typedef struct DemoIm {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xAB8];
} DemoIm; // size = 0xC5C

extern ActorInit Demo_Im_InitVars;

#endif
