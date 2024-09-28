#ifndef _Z_OCEFF_WIPE2_H_
#define _Z_OCEFF_WIPE2_H_

#include "global.hpp"

struct OceffWipe2;

typedef struct OceffWipe2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10];
} OceffWipe2; // size = 0x1B4

extern ActorInit Oceff_Wipe2_InitVars;

#endif
