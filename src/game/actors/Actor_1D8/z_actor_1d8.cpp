extern "C" {
#include "z_actor_1d8.hpp"

#define FLAGS 0x00000035

void Actor1D8_Init(Actor* actor, GameState* state);
void Actor1D8_Destroy(Actor* actor, GameState* state);
void Actor1D8_Update(Actor* actor, GameState* state);
void Actor1D8_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Actor_1D8.data.s")

ActorInit Actor_1D8_InitVars = {
    ACTOR_1D8,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GANON_DOWN,
    sizeof(Actor1D8),
    (ActorFunc)Actor1D8_Init,
    (ActorFunc)Actor1D8_Destroy,
    (ActorFunc)Actor1D8_Update,
    (ActorFunc)Actor1D8_Draw,
};

GLOBAL_ASM("asm/Actor1D8_Init.s")

GLOBAL_ASM("asm/Actor1D8_Destroy.s")

GLOBAL_ASM("asm/Actor1D8_Update.s")

GLOBAL_ASM("asm/Actor1D8_Draw.s")
}
