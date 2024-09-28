#ifndef _Z_DEMO_DU_H_
#define _Z_DEMO_DU_H_

#include "global.hpp"

struct DemoDu;

typedef struct DemoDu {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x274];
} DemoDu; // size = 0x418

extern ActorInit Demo_Du_InitVars;

#endif
