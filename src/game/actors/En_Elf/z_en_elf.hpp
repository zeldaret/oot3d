#ifndef _Z_EN_ELF_H_
#define _Z_EN_ELF_H_

#include "global.hpp"

struct EnElf;

typedef struct EnElf {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x82C];
} EnElf; // size = 0x9D0

extern ActorInit En_Elf_InitVars;

#endif
