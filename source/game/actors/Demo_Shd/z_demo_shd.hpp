#ifndef _Z_DEMO_SHD_H_
#define _Z_DEMO_SHD_H_

#include "global.hpp"

struct DemoShd;

typedef struct DemoShd {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x18];
} DemoShd; // size = 0x1BC

extern ActorInit Demo_Shd_InitVars;

#endif
