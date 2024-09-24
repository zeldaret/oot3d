#ifndef _Z_END_TITLE_H_
#define _Z_END_TITLE_H_

#include "global.hpp"

struct EndTitle;

typedef struct EndTitle {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} EndTitle; // size = 0x1CC

extern ActorInit End_Title_InitVars;

#endif
