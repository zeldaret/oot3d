#ifndef _Z_EN_SDA_H_
#define _Z_EN_SDA_H_

#include "global.hpp"

struct EnSda;

typedef struct EnSda {
    /* 0x0000 */ Actor actor;
} EnSda; // size = 0x1A4

extern ActorInit En_Sda_InitVars;

#endif
