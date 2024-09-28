#ifndef _Z_EN_IK_H_
#define _Z_EN_IK_H_

#include "global.hpp"

struct EnIk;

typedef struct EnIk {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xE58];
} EnIk; // size = 0xFFC

extern ActorInit En_Ik_InitVars;

#endif
