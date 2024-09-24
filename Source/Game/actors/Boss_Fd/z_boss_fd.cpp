extern "C" {
#include "z_boss_fd.hpp"

#define FLAGS 0x00000035

void BossFd_Init(Actor* actor, GameState* state);
void BossFd_Destroy(Actor* actor, GameState* state);
void BossFd_Update(Actor* actor, GameState* state);
void BossFd_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Boss_Fd.data.s")

ActorInit Boss_Fd_InitVars = {
    ACTOR_BOSS_FD,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_FD,
    sizeof(BossFd),
    (ActorFunc)BossFd_Init,
    (ActorFunc)BossFd_Destroy,
    (ActorFunc)BossFd_Update,
    (ActorFunc)BossFd_Draw,
};

GLOBAL_ASM("asm/BossFd_Init.s")

GLOBAL_ASM("asm/BossFd_Destroy.s")

GLOBAL_ASM("asm/BossFd_Update.s")

GLOBAL_ASM("asm/BossFd_Draw.s")
}
