#ifndef _Z_EN_AROW_TRAP_H_
#define _Z_EN_AROW_TRAP_H_

#include "global.hpp"

struct EnArowTrap;

typedef struct EnArowTrap {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8];
} EnArowTrap; // size = 0x1AC

extern ActorInit En_Arow_Trap_InitVars;

#endif
