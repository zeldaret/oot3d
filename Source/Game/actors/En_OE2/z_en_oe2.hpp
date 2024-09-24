#ifndef _Z_EN_OE2_H_
#define _Z_EN_OE2_H_

#include "global.hpp"

struct EnOE2;

typedef void (*EnOE2ActionFunc)(struct EnOE2*, PlayState*);

typedef struct EnOE2 {
    /* 0x0000 */ Actor actor;
    /* 0x1A4 */ char unk_1A4[0x48];
    /* 0x1EC */ EnOE2ActionFunc actionFunc;
} EnOE2; // size = 0x1F0

extern ActorInit En_OE2_InitVars;

#endif
