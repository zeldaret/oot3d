#ifndef _Z_EN_HORSE_LINK_CHILD_H_
#define _Z_EN_HORSE_LINK_CHILD_H_

#include "global.hpp"

struct EnHorseLinkChild;

typedef struct EnHorseLinkChild {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xD04];
} EnHorseLinkChild; // size = 0xEA8

extern ActorInit En_Horse_Link_Child_InitVars;

#endif
