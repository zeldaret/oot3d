#ifndef _Z_EN_BOX_H_
#define _Z_EN_BOX_H_

#include "global.hpp"

struct EnBox;

typedef struct EnBox {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1F4];
} EnBox; // size = 0x398

extern ActorInit En_Box_InitVars;

#endif
