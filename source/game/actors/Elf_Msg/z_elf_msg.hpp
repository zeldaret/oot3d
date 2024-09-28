#ifndef _Z_ELF_MSG_H_
#define _Z_ELF_MSG_H_

#include "global.hpp"

struct ElfMsg;

typedef struct ElfMsg {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4];
} ElfMsg; // size = 0x1A8

extern ActorInit Elf_Msg_InitVars;

#endif
