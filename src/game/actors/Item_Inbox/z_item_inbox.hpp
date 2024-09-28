#ifndef _Z_ITEM_INBOX_H_
#define _Z_ITEM_INBOX_H_

#include "global.hpp"

struct ItemInbox;

typedef struct ItemInbox {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8];
} ItemInbox; // size = 0x1AC

extern ActorInit Item_Inbox_InitVars;

#endif
