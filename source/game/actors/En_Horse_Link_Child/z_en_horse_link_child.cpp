extern "C" {
#include "z_en_horse_link_child.hpp"

#define FLAGS 0x02000010

void EnHorseLinkChild_Init(Actor* actor, GameState* state);
void EnHorseLinkChild_Destroy(Actor* actor, GameState* state);
void EnHorseLinkChild_Update(Actor* actor, GameState* state);
void EnHorseLinkChild_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Horse_Link_Child.data.s")

ActorInit En_Horse_Link_Child_InitVars = {
    ACTOR_EN_HORSE_LINK_CHILD,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HORSE_LINK_CHILD,
    sizeof(EnHorseLinkChild),
    (ActorFunc)EnHorseLinkChild_Init,
    (ActorFunc)EnHorseLinkChild_Destroy,
    (ActorFunc)EnHorseLinkChild_Update,
    (ActorFunc)EnHorseLinkChild_Draw,
};

GLOBAL_ASM("asm/EnHorseLinkChild_Init.s")

GLOBAL_ASM("asm/EnHorseLinkChild_Destroy.s")

GLOBAL_ASM("asm/EnHorseLinkChild_Update.s")

GLOBAL_ASM("asm/EnHorseLinkChild_Draw.s")
}
