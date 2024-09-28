#ifndef _Z_EN_ATTACK_NIW_H_
#define _Z_EN_ATTACK_NIW_H_

#include "global.hpp"

struct EnAttackNiw;

typedef struct EnAttackNiw {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4C4];
} EnAttackNiw; // size = 0x668

extern ActorInit En_Attack_Niw_InitVars;

#endif
