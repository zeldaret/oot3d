#ifndef _Z_MAGIC_WIND_H_
#define _Z_MAGIC_WIND_H_

#include "global.hpp"

struct MagicWind;

typedef struct MagicWind {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x144];
} MagicWind; // size = 0x2E8

extern ActorInit Magic_Wind_InitVars;

#endif
