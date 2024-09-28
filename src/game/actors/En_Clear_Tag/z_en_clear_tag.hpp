#ifndef _Z_EN_CLEAR_TAG_H_
#define _Z_EN_CLEAR_TAG_H_

#include "global.hpp"

struct EnClearTag;

typedef struct EnClearTag {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC4];
} EnClearTag; // size = 0x268

extern ActorInit En_Clear_Tag_InitVars;

#endif
