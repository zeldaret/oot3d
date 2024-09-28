#ifndef _Z_EN_SSH_H_
#define _Z_EN_SSH_H_

#include "global.hpp"

struct EnSsh;

typedef struct EnSsh {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xCD4];
} EnSsh; // size = 0xE78

extern ActorInit En_Ssh_InitVars;

#endif
