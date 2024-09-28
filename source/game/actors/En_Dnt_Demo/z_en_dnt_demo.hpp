#ifndef _Z_EN_DNT_DEMO_H_
#define _Z_EN_DNT_DEMO_H_

#include "global.hpp"

struct EnDntDemo;

typedef struct EnDntDemo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xB4];
} EnDntDemo; // size = 0x258

extern ActorInit En_Dnt_Demo_InitVars;

#endif
