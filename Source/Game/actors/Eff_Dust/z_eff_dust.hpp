#ifndef _Z_EFF_DUST_H_
#define _Z_EFF_DUST_H_

#include "global.hpp"

struct EffDust;

typedef struct EffDust {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x424];
} EffDust; // size = 0x5C8

extern ActorInit Eff_Dust_InitVars;

#endif
