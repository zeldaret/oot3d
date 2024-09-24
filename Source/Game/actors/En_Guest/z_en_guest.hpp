#ifndef _Z_EN_GUEST_H_
#define _Z_EN_GUEST_H_

#include "global.hpp"

struct EnGuest;

typedef struct EnGuest {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7D4];
} EnGuest; // size = 0x978

extern ActorInit En_Guest_InitVars;

#endif
