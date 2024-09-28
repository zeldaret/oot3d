#ifndef _Z_EN_WONDER_TALK_H_
#define _Z_EN_WONDER_TALK_H_

#include "global.hpp"

struct EnWonderTalk;

typedef struct EnWonderTalk {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} EnWonderTalk; // size = 0x1C0

extern ActorInit En_Wonder_Talk_InitVars;

#endif
