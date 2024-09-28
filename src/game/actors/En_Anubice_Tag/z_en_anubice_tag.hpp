#ifndef _Z_EN_ANUBICE_TAG_H_
#define _Z_EN_ANUBICE_TAG_H_

#include "global.hpp"

struct EnAnubiceTag;

typedef struct EnAnubiceTag {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC];
} EnAnubiceTag; // size = 0x1B0

extern ActorInit En_Anubice_Tag_InitVars;

#endif
