#ifndef _Z_EN_LIGHTBOX_H_
#define _Z_EN_LIGHTBOX_H_

#include "global.hpp"

struct EnLightbox;

typedef struct EnLightbox {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} EnLightbox; // size = 0x1C0

extern ActorInit En_Lightbox_InitVars;

#endif
