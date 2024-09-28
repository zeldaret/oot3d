#ifndef _Z_EN_TUBO_TRAP_H_
#define _Z_EN_TUBO_TRAP_H_

#include "global.hpp"

struct EnTuboTrap;

typedef struct EnTuboTrap {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x70];
} EnTuboTrap; // size = 0x214

extern ActorInit En_Tubo_Trap_InitVars;

#endif
