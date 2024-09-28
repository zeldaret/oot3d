#ifndef _Z_EN_VIEWER_H_
#define _Z_EN_VIEWER_H_

#include "global.hpp"

struct EnViewer;

typedef struct EnViewer {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6D4];
} EnViewer; // size = 0x878

extern ActorInit En_Viewer_InitVars;

#endif
