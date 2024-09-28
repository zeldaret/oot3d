#ifndef _Z_EN_WONDER_TALK2_H_
#define _Z_EN_WONDER_TALK2_H_

#include "global.hpp"

struct EnWonderTalk2;

typedef struct EnWonderTalk2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} EnWonderTalk2; // size = 0x1CC

extern ActorInit En_Wonder_Talk2_InitVars;

#endif
