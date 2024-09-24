extern "C" {
#include "z_boss_ganondrof.hpp"

#define FLAGS 0x00000035

void BossGanondrof_Init(Actor* actor, GameState* state);
void BossGanondrof_Destroy(Actor* actor, GameState* state);
void BossGanondrof_Update(Actor* actor, GameState* state);
void BossGanondrof_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Boss_Ganondrof.data.s")

ActorInit Boss_Ganondrof_InitVars = {
    ACTOR_BOSS_GANONDROF,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GND,
    sizeof(BossGanondrof),
    (ActorFunc)BossGanondrof_Init,
    (ActorFunc)BossGanondrof_Destroy,
    (ActorFunc)BossGanondrof_Update,
    (ActorFunc)BossGanondrof_Draw,
};

GLOBAL_ASM("asm/BossGanondrof_Init.s")

GLOBAL_ASM("asm/BossGanondrof_Destroy.s")

GLOBAL_ASM("asm/BossGanondrof_Update.s")

GLOBAL_ASM("asm/BossGanondrof_Draw.s")
}
