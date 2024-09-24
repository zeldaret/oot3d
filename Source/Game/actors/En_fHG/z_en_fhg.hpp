#ifndef _Z_EN_FHG_H_
#define _Z_EN_FHG_H_

#include "global.hpp"

struct EnfHG;

typedef struct EnfHG {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xB88];
} EnfHG; // size = 0xD2C

extern ActorInit En_fHG_InitVars;

#endif
