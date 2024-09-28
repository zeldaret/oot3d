#ifndef _Z_ELF_MSG2_H_
#define _Z_ELF_MSG2_H_

#include "global.hpp"

struct ElfMsg2;

typedef struct ElfMsg2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4];
} ElfMsg2; // size = 0x1A8

extern ActorInit Elf_Msg2_InitVars;

#endif
