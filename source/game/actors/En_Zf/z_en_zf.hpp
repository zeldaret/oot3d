#ifndef _Z_EN_ZF_H_
#define _Z_EN_ZF_H_

#include "global.hpp"

struct EnZf;

typedef struct EnZf {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA44];
} EnZf; // size = 0xBE8

extern ActorInit En_Zf_InitVars;

#endif
