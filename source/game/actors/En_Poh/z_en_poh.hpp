#ifndef _Z_EN_POH_H_
#define _Z_EN_POH_H_

#include "global.hpp"

struct EnPoh;

typedef struct EnPoh {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8C8];
} EnPoh; // size = 0xA6C

extern ActorInit En_Poh_InitVars;

#endif
