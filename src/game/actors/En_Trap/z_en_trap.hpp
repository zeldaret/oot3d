#ifndef _Z_EN_TRAP_H_
#define _Z_EN_TRAP_H_

#include "global.hpp"

struct EnTrap;

typedef struct EnTrap {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xB0];
} EnTrap; // size = 0x254

extern ActorInit En_Trap_InitVars;

#endif
