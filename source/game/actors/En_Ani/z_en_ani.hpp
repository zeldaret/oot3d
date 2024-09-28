#ifndef _Z_EN_ANI_H_
#define _Z_EN_ANI_H_

#include "global.hpp"

struct EnAni;

typedef struct EnAni {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8E0];
} EnAni; // size = 0xA84

extern ActorInit En_Ani_InitVars;

#endif
