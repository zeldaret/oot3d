extern "C" {
#include "z_item_shield.hpp"

#define FLAGS 0x00000010

void ItemShield_Init(Actor* actor, GameState* state);
void ItemShield_Destroy(Actor* actor, GameState* state);
void ItemShield_Update(Actor* actor, GameState* state);
void ItemShield_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Item_Shield.data.s")

ActorInit Item_Shield_InitVars = {
    ACTOR_ITEM_SHIELD,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_LINK_CHILD,
    sizeof(ItemShield),
    (ActorFunc)ItemShield_Init,
    (ActorFunc)ItemShield_Destroy,
    (ActorFunc)ItemShield_Update,
    (ActorFunc)ItemShield_Draw,
};

GLOBAL_ASM("asm/ItemShield_Init.s")

GLOBAL_ASM("asm/ItemShield_Destroy.s")

GLOBAL_ASM("asm/ItemShield_Update.s")

GLOBAL_ASM("asm/ItemShield_Draw.s")
}
