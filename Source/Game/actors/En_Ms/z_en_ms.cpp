extern "C" {
#include "z_en_ms.hpp"

#define FLAGS 0x00000009

void EnMs_Init(Actor* actor, GameState* state);
void EnMs_Destroy(Actor* actor, GameState* state);
void EnMs_Update(Actor* actor, GameState* state);
void EnMs_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ms.data.s")

ActorInit En_Ms_InitVars = {
    ACTOR_EN_MS,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_MS,
    sizeof(EnMs),
    (ActorFunc)EnMs_Init,
    (ActorFunc)EnMs_Destroy,
    (ActorFunc)EnMs_Update,
    (ActorFunc)EnMs_Draw,
};

GLOBAL_ASM("asm/EnMs_Init.s")

GLOBAL_ASM("asm/EnMs_Destroy.s")

GLOBAL_ASM("asm/EnMs_Update.s")

GLOBAL_ASM("asm/EnMs_Draw.s")
}
