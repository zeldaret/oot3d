#ifndef _Z_EN_KANBAN_H_
#define _Z_EN_KANBAN_H_

#include "global.hpp"

struct EnKanban;

typedef struct EnKanban {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xE0];
} EnKanban; // size = 0x284

extern ActorInit En_Kanban_InitVars;

#endif
