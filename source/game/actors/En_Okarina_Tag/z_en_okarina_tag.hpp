#ifndef _Z_EN_OKARINA_TAG_H_
#define _Z_EN_OKARINA_TAG_H_

#include "global.hpp"

struct EnOkarinaTag;

typedef struct EnOkarinaTag {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x14];
} EnOkarinaTag; // size = 0x1B8

extern ActorInit En_Okarina_Tag_InitVars;

#endif
