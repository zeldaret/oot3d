#ifndef _Z_BG_RELAY_OBJECTS_H_
#define _Z_BG_RELAY_OBJECTS_H_

#include "global.hpp"

struct BgRelayObjects;

typedef struct BgRelayObjects {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgRelayObjects; // size = 0x1CC

extern ActorInit Bg_Relay_Objects_InitVars;

#endif
