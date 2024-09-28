#ifndef _Z_OCEFF_WIPE3_H_
#define _Z_OCEFF_WIPE3_H_

#include "global.hpp"

struct OceffWipe3;

typedef struct OceffWipe3 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10];
} OceffWipe3; // size = 0x1B4

extern ActorInit Oceff_Wipe3_InitVars;

#endif
