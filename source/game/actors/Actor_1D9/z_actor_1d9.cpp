extern "C" {
#include "z_actor_1d9.hpp"

#define FLAGS 0x00000009

void Actor1D9_Init(Actor* actor, GameState* state);
void Actor1D9_Destroy(Actor* actor, GameState* state);
void Actor1D9_Update(Actor* actor, GameState* state);
void Actor1D9_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Actor_1D9.data.s")

ActorInit Actor_1D9_InitVars = {
    ACTOR_1D9,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_HINTSTONE,
    sizeof(Actor1D9),
    (ActorFunc)Actor1D9_Init,
    (ActorFunc)Actor1D9_Destroy,
    (ActorFunc)Actor1D9_Update,
    (ActorFunc)Actor1D9_Draw,
};

GLOBAL_ASM("asm/Actor1D9_Init.s")

GLOBAL_ASM("asm/Actor1D9_Destroy.s")

GLOBAL_ASM("asm/Actor1D9_Update.s")

GLOBAL_ASM("asm/Actor1D9_Draw.s")
}
