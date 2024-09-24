extern "C" {
#include "z_shot_sun.hpp"

#define FLAGS 0x80000009

void ShotSun_Init(Actor* actor, GameState* state);
void ShotSun_Destroy(Actor* actor, GameState* state);
void ShotSun_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Shot_Sun.data.s")

ActorInit Shot_Sun_InitVars = {
    ACTOR_SHOT_SUN,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ShotSun),
    (ActorFunc)ShotSun_Init,
    (ActorFunc)ShotSun_Destroy,
    (ActorFunc)ShotSun_Update,
    NULL,
};

GLOBAL_ASM("asm/ShotSun_Init.s")

GLOBAL_ASM("asm/ShotSun_Destroy.s")

GLOBAL_ASM("asm/ShotSun_Update.s")
}
