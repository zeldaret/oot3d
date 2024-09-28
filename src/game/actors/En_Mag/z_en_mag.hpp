#ifndef _Z_EN_MAG_H_
#define _Z_EN_MAG_H_

#include "global.hpp"

struct EnMag;

typedef struct EnMag {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C];
} EnMag; // size = 0x1E0

extern ActorInit En_Mag_InitVars;

#endif
