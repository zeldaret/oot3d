extern "C" {
#include "z_boss_fd2.hpp"

#define FLAGS 0x00000035

void BossFd2_Init(Actor* actor, GameState* state);
void BossFd2_Destroy(Actor* actor, GameState* state);
void BossFd2_Update(Actor* actor, GameState* state);
void BossFd2_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Boss_Fd2.data.s")

ActorInit Boss_Fd2_InitVars = {
    ACTOR_BOSS_FD2,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_FD,
    sizeof(BossFd2),
    (ActorFunc)BossFd2_Init,
    (ActorFunc)BossFd2_Destroy,
    (ActorFunc)BossFd2_Update,
    (ActorFunc)BossFd2_Draw,
};

GLOBAL_ASM("asm/BossFd2_Init.s")

GLOBAL_ASM("asm/BossFd2_Destroy.s")

GLOBAL_ASM("asm/BossFd2_Update.s")

GLOBAL_ASM("asm/BossFd2_Draw.s")

GLOBAL_ASM("asm/BossFd2_BreatheFire.s")

GLOBAL_ASM("asm/BossFd2_Burrow.s")

GLOBAL_ASM("asm/BossFd2_ClawSwipe.s")

GLOBAL_ASM("asm/BossFd2_Damaged.s")

GLOBAL_ASM("asm/BossFd2_Death.s")

GLOBAL_ASM("asm/BossFd2_Emerge.s")

GLOBAL_ASM("asm/BossFd2_Idle.s")

GLOBAL_ASM("asm/BossFd2_SetupEmerge.s")

GLOBAL_ASM("asm/BossFd2_Vulnerable.s")

GLOBAL_ASM("asm/BossFd2_Wait.s")

GLOBAL_ASM("asm/FUN_001f285c.s")

GLOBAL_ASM("asm/FUN_00260008.s")

GLOBAL_ASM("asm/FUN_0027cba8.s")

GLOBAL_ASM("asm/FUN_00335904.s")

}
