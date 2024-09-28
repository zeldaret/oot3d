extern "C" {
#include "z_arrow_ice.hpp"

#define FLAGS 0x02000010

void ArrowIce_Init(Actor* actor, GameState* state);
void ArrowIce_Destroy(Actor* actor, GameState* state);
void ArrowIce_Update(Actor* actor, GameState* state);
void ArrowIce_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Arrow_Ice.data.s")

ActorInit Arrow_Ice_InitVars = {
    ACTOR_ARROW_ICE,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ArrowIce),
    (ActorFunc)ArrowIce_Init,
    (ActorFunc)ArrowIce_Destroy,
    (ActorFunc)ArrowIce_Update,
    (ActorFunc)ArrowIce_Draw,
};

GLOBAL_ASM("asm/ArrowIce_Init.s")

GLOBAL_ASM("asm/ArrowIce_Destroy.s")

GLOBAL_ASM("asm/ArrowIce_Update.s")

GLOBAL_ASM("asm/ArrowIce_Draw.s")
}
