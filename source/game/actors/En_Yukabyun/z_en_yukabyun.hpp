#ifndef _Z_EN_YUKABYUN_H_
#define _Z_EN_YUKABYUN_H_

#include "global.hpp"

struct EnYukabyun;

typedef struct EnYukabyun {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x64];
} EnYukabyun; // size = 0x208

extern ActorInit En_Yukabyun_InitVars;

#endif
