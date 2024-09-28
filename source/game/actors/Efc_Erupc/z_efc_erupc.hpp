#ifndef _Z_EFC_ERUPC_H_
#define _Z_EFC_ERUPC_H_

#include "global.hpp"

struct EfcErupc;

typedef struct EfcErupc {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1F5C];
} EfcErupc; // size = 0x2100

extern ActorInit Efc_Erupc_InitVars;

#endif
