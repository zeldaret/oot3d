extern "C" {
#include "z_boss_va.hpp"

#define FLAGS 0x00000035

void BossVa_Init(Actor* actor, GameState* state);
void BossVa_Destroy(Actor* actor, GameState* state);
void BossVa_Update(Actor* actor, GameState* state);
void BossVa_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Boss_Va.data.s")

ActorInit Boss_Va_InitVars = {
    ACTOR_BOSS_VA,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_BV,
    sizeof(BossVa),
    (ActorFunc)BossVa_Init,
    (ActorFunc)BossVa_Destroy,
    (ActorFunc)BossVa_Update,
    (ActorFunc)BossVa_Draw,
};

GLOBAL_ASM("asm/BossVa_Init.s")

GLOBAL_ASM("asm/BossVa_Destroy.s")

GLOBAL_ASM("asm/BossVa_Update.s")

GLOBAL_ASM("asm/BossVa_Draw.s")
}
