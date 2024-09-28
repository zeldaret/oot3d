#ifndef _Z_ARMS_HOOK_H_
#define _Z_ARMS_HOOK_H_

#include "global.hpp"

struct ArmsHook;

typedef struct ArmsHook {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xF0];
} ArmsHook; // size = 0x294

extern ActorInit Arms_Hook_InitVars;

#endif
