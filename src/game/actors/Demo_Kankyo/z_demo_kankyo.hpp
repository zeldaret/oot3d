#ifndef _Z_DEMO_KANKYO_H_
#define _Z_DEMO_KANKYO_H_

#include "global.hpp"

struct DemoKankyo;

typedef struct DemoKankyo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x19D8];
} DemoKankyo; // size = 0x1B7C

extern ActorInit Demo_Kankyo_InitVars;

#endif
