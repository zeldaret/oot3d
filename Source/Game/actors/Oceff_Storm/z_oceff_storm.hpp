#ifndef _Z_OCEFF_STORM_H_
#define _Z_OCEFF_STORM_H_

#include "global.hpp"

struct OceffStorm;

typedef struct OceffStorm {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} OceffStorm; // size = 0x1C8

extern ActorInit Oceff_Storm_InitVars;

#endif
