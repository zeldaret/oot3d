#ifndef _Z_EN_PO_FIELD_H_
#define _Z_EN_PO_FIELD_H_

#include "global.hpp"

struct EnPoField;

typedef struct EnPoField {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x844];
} EnPoField; // size = 0x9E8

extern ActorInit En_Po_Field_InitVars;

#endif
