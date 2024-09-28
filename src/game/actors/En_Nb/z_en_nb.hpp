#ifndef _Z_EN_NB_H_
#define _Z_EN_NB_H_

#include "global.hpp"

struct EnNb;

typedef struct EnNb {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC04];
} EnNb; // size = 0xDA8

extern ActorInit En_Nb_InitVars;

#endif
