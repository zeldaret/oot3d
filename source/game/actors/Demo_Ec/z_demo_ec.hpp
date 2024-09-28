#ifndef _Z_DEMO_EC_H_
#define _Z_DEMO_EC_H_

#include "global.hpp"

struct DemoEc;

typedef struct DemoEc {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x135C];
} DemoEc; // size = 0x1500

extern ActorInit Demo_Ec_InitVars;

#endif
