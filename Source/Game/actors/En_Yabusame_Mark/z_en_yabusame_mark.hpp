#ifndef _Z_EN_YABUSAME_MARK_H_
#define _Z_EN_YABUSAME_MARK_H_

#include "global.hpp"

struct EnYabusameMark;

typedef struct EnYabusameMark {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC4];
} EnYabusameMark; // size = 0x268

extern ActorInit En_Yabusame_Mark_InitVars;

#endif
