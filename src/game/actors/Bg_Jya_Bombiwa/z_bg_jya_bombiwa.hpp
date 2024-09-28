#ifndef _Z_BG_JYA_BOMBIWA_H_
#define _Z_BG_JYA_BOMBIWA_H_

#include "global.hpp"

struct BgJyaBombiwa;

typedef struct BgJyaBombiwa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x90];
} BgJyaBombiwa; // size = 0x234

extern ActorInit Bg_Jya_Bombiwa_InitVars;

#endif
