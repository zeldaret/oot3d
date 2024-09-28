#ifndef _Z_EN_DNT_NOMAL_H_
#define _Z_EN_DNT_NOMAL_H_

#include "global.hpp"

struct EnDntNomal;

typedef struct EnDntNomal {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x754];
} EnDntNomal; // size = 0x8F8

extern ActorInit En_Dnt_Nomal_InitVars;

#endif
