#ifndef _Z_OCEFF_WIPE4_H_
#define _Z_OCEFF_WIPE4_H_

#include "global.hpp"

struct OceffWipe4;

typedef struct OceffWipe4 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10];
} OceffWipe4; // size = 0x1B4

extern ActorInit Oceff_Wipe4_InitVars;

#endif
