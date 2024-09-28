#ifndef _Z_EN_STREAM_H_
#define _Z_EN_STREAM_H_

#include "global.hpp"

struct EnStream;

typedef void (*EnStreamActionFunc)(struct EnStream*, PlayState*);

typedef struct EnStream {
    /* 0x000 */ Actor actor;
    /* 0x1A4 */ EnStreamActionFunc actionFunc;
    /* 0x1A8 */ s32 unk_1A8;
    /* 0x1AC */ char unk_1AC[0x4];
    /* 0x1B0 */ SkeletonAnimationModel* skelAnimModel;
} EnStream; // size = 0x1B4

extern ActorInit En_Stream_InitVars;

#endif
