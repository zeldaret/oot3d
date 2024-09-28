#ifndef _Z_EN_BROB_H_
#define _Z_EN_BROB_H_

#include "global.hpp"

struct EnBrob;

typedef struct EnBrob {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3CC];
} EnBrob; // size = 0x570

extern ActorInit En_Brob_InitVars;

#endif
