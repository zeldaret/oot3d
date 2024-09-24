extern "C" {
#include "z_item_etcetera.hpp"

#define FLAGS 0x00000010

void ItemEtcetera_Init(Actor* actor, GameState* state);
void ItemEtcetera_Destroy(Actor* actor, GameState* state);
void ItemEtcetera_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Item_Etcetera.data.s")

ActorInit Item_Etcetera_InitVars = {
    ACTOR_ITEM_ETCETERA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ItemEtcetera),
    (ActorFunc)ItemEtcetera_Init,
    (ActorFunc)ItemEtcetera_Destroy,
    (ActorFunc)ItemEtcetera_Update,
    NULL,
};

GLOBAL_ASM("asm/ItemEtcetera_Init.s")

GLOBAL_ASM("asm/ItemEtcetera_Destroy.s")

GLOBAL_ASM("asm/ItemEtcetera_Update.s")
}
