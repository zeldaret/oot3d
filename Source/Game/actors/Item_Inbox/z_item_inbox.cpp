extern "C" {
#include "z_item_inbox.hpp"

#define FLAGS 0x00000009

void ItemInbox_Init(Actor* actor, GameState* state);
void ItemInbox_Destroy(Actor* actor, GameState* state);
void ItemInbox_Update(Actor* actor, GameState* state);
void ItemInbox_Draw(Actor* actor, GameState* state);

ActorInit Item_Inbox_InitVars = {
    ACTOR_ITEM_INBOX,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ItemInbox),
    (ActorFunc)ItemInbox_Init,
    (ActorFunc)ItemInbox_Destroy,
    (ActorFunc)ItemInbox_Update,
    (ActorFunc)ItemInbox_Draw,
};

GLOBAL_ASM("asm/ItemInbox_Init.s")

GLOBAL_ASM("asm/ItemInbox_Destroy.s")

GLOBAL_ASM("asm/ItemInbox_Update.s")

GLOBAL_ASM("asm/ItemInbox_Draw.s")
}
