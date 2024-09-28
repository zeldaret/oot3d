extern "C" {
#include "z_en_wood02.hpp"

#define FLAGS 0x80000000

void EnWood02_Init(Actor* actor, GameState* state);
void EnWood02_Destroy(Actor* actor, GameState* state);
void EnWood02_Update(Actor* actor, GameState* state);
void EnWood02_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Wood02.data.s")

ActorInit En_Wood02_InitVars = {
    ACTOR_EN_WOOD02,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_WOOD02,
    sizeof(EnWood02),
    (ActorFunc)EnWood02_Init,
    (ActorFunc)EnWood02_Destroy,
    (ActorFunc)EnWood02_Update,
    (ActorFunc)EnWood02_Draw,
};

GLOBAL_ASM("asm/EnWood02_Init.s")

GLOBAL_ASM("asm/EnWood02_Destroy.s")

GLOBAL_ASM("asm/EnWood02_Update.s")

GLOBAL_ASM("asm/EnWood02_Draw.s")
}
