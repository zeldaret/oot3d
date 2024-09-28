#ifndef _Z_EN_VM_H_
#define _Z_EN_VM_H_

#include "global.hpp"

struct EnVm;

typedef struct EnVm {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x540];
} EnVm; // size = 0x6E4

extern ActorInit En_Vm_InitVars;

#endif
