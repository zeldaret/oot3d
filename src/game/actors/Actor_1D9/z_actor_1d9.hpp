#ifndef _Z_ACTOR_1D9_H_
#define _Z_ACTOR_1D9_H_

#include "global.hpp"

struct Actor1D9;

typedef void (*Actor1D9ActionFunc)(struct Actor1D9*, PlayState*);

typedef struct Actor1D9 {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x01BC */ Actor1D9ActionFunc actionFunc;
    /* 0x01C0 */ char jointTable[0xD0];
    /* 0x0290 */ char morphTable[0xD0];
    /* 0x0360 */ SkelAnime skelAnime;
    /* 0x03E4 */ char unk_3E4[0x10];
} Actor1D9; // size = 0x3F4

extern ActorInit Actor_1D9_InitVars;

#endif
