#ifndef _Z_EN_DEKUNUTS_H_
#define _Z_EN_DEKUNUTS_H_

#include "global.hpp"

struct EnDekunuts;

typedef struct EnDekunuts {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4FC];
} EnDekunuts; // size = 0x6A0

extern ActorInit En_Dekunuts_InitVars;

#endif
