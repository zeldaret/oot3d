#ifndef _Z_DEMO_SA_H_
#define _Z_DEMO_SA_H_

#include "global.hpp"

struct DemoSa;

typedef struct DemoSa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x274];
} DemoSa; // size = 0x418

extern ActorInit Demo_Sa_InitVars;

#endif
