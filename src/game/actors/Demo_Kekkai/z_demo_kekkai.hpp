#ifndef _Z_DEMO_KEKKAI_H_
#define _Z_DEMO_KEKKAI_H_

#include "global.hpp"

struct DemoKekkai;

typedef struct DemoKekkai {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xD8];
} DemoKekkai; // size = 0x27C

extern ActorInit Demo_Kekkai_InitVars;

#endif
