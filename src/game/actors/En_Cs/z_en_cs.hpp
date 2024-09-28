#ifndef _Z_EN_CS_H_
#define _Z_EN_CS_H_

#include "global.hpp"

struct EnCs;

typedef struct EnCs {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x960];
} EnCs; // size = 0xB04

extern ActorInit En_Cs_InitVars;

#endif
