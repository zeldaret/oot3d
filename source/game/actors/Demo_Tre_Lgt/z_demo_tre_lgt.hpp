#ifndef _Z_DEMO_TRE_LGT_H_
#define _Z_DEMO_TRE_LGT_H_

#include "global.hpp"

struct DemoTreLgt;

typedef struct DemoTreLgt {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3EC];
} DemoTreLgt; // size = 0x590

extern ActorInit Demo_Tre_Lgt_InitVars;

#endif
