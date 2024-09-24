#ifndef _Z_OCEFF_WIPE_H_
#define _Z_OCEFF_WIPE_H_

#include "global.hpp"

struct OceffWipe;

typedef struct OceffWipe {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10];
} OceffWipe; // size = 0x1B4

extern ActorInit Oceff_Wipe_InitVars;

#endif
