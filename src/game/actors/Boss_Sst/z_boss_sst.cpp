extern "C" {
#include "z_boss_sst.hpp"

#define FLAGS 0x00000435

void BossSst_Init(Actor* actor, GameState* state);
void BossSst_Destroy(Actor* actor, GameState* state);
void BossSst_Update(Actor* actor, GameState* state);
void BossSst_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Boss_Sst.data_00516174.s")
GLOBAL_ASM("data/z_Boss_Sst.data_00516400.s")

ActorInit Boss_Sst_InitVars = {
    ACTOR_BOSS_SST,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_SST,
    sizeof(BossSst),
    (ActorFunc)BossSst_Init,
    (ActorFunc)BossSst_Destroy,
    (ActorFunc)BossSst_Update,
    (ActorFunc)BossSst_Draw,
};

GLOBAL_ASM("asm/BossSst_Init.s")

GLOBAL_ASM("asm/BossSst_Destroy.s")

GLOBAL_ASM("asm/BossSst_Update.s")

GLOBAL_ASM("asm/BossSst_Draw.s")
}
