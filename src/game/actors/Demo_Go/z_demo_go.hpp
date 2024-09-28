#ifndef _Z_DEMO_GO_H_
#define _Z_DEMO_GO_H_

#include "global.hpp"

struct DemoGo;

typedef struct DemoGo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x260];
} DemoGo; // size = 0x404

extern ActorInit Demo_Go_InitVars;

#endif
