extern "C" {
#include "z_en_ex_item.hpp"

#define FLAGS 0x00000030

void EnExItem_Init(Actor* actor, GameState* state);
void EnExItem_Destroy(Actor* actor, GameState* state);
void EnExItem_Update(Actor* actor, GameState* state);
void EnExItem_Draw(Actor* actor, GameState* state);

ActorInit En_Ex_Item_InitVars = {
    ACTOR_EN_EX_ITEM,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnExItem),
    (ActorFunc)EnExItem_Init,
    (ActorFunc)EnExItem_Destroy,
    (ActorFunc)EnExItem_Update,
    (ActorFunc)EnExItem_Draw,
};

GLOBAL_ASM("asm/EnExItem_Init.s")

GLOBAL_ASM("asm/EnExItem_Destroy.s")

GLOBAL_ASM("asm/EnExItem_Update.s")

GLOBAL_ASM("asm/EnExItem_Draw.s")
}
