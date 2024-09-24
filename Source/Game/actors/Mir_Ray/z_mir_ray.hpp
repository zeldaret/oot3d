#ifndef _Z_MIR_RAY_H_
#define _Z_MIR_RAY_H_

#include "global.hpp"

struct MirRay;

typedef struct MirRay {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1B8];
} MirRay; // size = 0x35C

extern ActorInit Mir_Ray_InitVars;

#endif
