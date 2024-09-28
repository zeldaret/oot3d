extern "C" {
#include "z_eff_dust.hpp"

#define FLAGS 0x00000030

void EffDust_Init(Actor* actor, GameState* state);
void EffDust_Destroy(Actor* actor, GameState* state);
void EffDust_Update(Actor* actor, GameState* state);
void EffDust_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Eff_Dust.data.s")

ActorInit Eff_Dust_InitVars = {
    ACTOR_EFF_DUST,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EffDust),
    (ActorFunc)EffDust_Init,
    (ActorFunc)EffDust_Destroy,
    (ActorFunc)EffDust_Update,
    (ActorFunc)EffDust_Draw,
};

GLOBAL_ASM("asm/EffDust_Init.s")

GLOBAL_ASM("asm/EffDust_Destroy.s")

GLOBAL_ASM("asm/EffDust_Update.s")

GLOBAL_ASM("asm/EffDust_Draw.s")
}
