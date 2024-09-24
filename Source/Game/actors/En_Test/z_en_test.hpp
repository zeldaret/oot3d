#ifndef _Z_EN_TEST_H_
#define _Z_EN_TEST_H_

#include "global.hpp"

struct EnTest;

typedef struct EnTest {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C28];
} EnTest; // size = 0x1DCC

extern ActorInit En_Test_InitVars;

#endif
