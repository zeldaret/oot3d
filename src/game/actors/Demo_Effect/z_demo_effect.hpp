#ifndef _Z_DEMO_EFFECT_H_
#define _Z_DEMO_EFFECT_H_

#include "global.hpp"

struct DemoEffect;

typedef struct DemoEffect {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x158];
} DemoEffect; // size = 0x2FC

extern ActorInit Demo_Effect_InitVars;

#endif
