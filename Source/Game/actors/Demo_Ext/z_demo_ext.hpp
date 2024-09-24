#ifndef _Z_DEMO_EXT_H_
#define _Z_DEMO_EXT_H_

#include "global.hpp"

struct DemoExt;

typedef struct DemoExt {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x40];
} DemoExt; // size = 0x1E4

extern ActorInit Demo_Ext_InitVars;

#endif
