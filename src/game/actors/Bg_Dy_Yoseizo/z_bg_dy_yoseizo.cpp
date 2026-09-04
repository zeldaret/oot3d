extern "C" {
#include "z_bg_dy_yoseizo.hpp"

#define FLAGS 0x02000030

void BgDyYoseizo_Init(Actor* actor, GameState* state);
void BgDyYoseizo_Destroy(Actor* actor, GameState* state);
void BgDyYoseizo_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Dy_Yoseizo.data.s")

ActorInit Bg_Dy_Yoseizo_InitVars = {
    ACTOR_BG_DY_YOSEIZO,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_DY_OBJ,
    sizeof(BgDyYoseizo),
    (ActorFunc)BgDyYoseizo_Init,
    (ActorFunc)BgDyYoseizo_Destroy,
    (ActorFunc)BgDyYoseizo_Update,
    NULL,
};

GLOBAL_ASM("asm/BgDyYoseizo_Init.s")

GLOBAL_ASM("asm/BgDyYoseizo_Destroy.s")

GLOBAL_ASM("asm/BgDyYoseizo_Update.s")

GLOBAL_ASM("asm/BgDyYoseizo_Bob.s")

GLOBAL_ASM("asm/BgDyYoseizo_CheckMagicAcquired.s")

GLOBAL_ASM("asm/BgDyYoseizo_ChooseType.s")

GLOBAL_ASM("asm/BgDyYoseizo_CompleteSpinGrow_NoReward.s")

GLOBAL_ASM("asm/BgDyYoseizo_Draw.s")

GLOBAL_ASM("asm/BgDyYoseizo_Give_Reward.s")

GLOBAL_ASM("asm/BgDyYoseizo_GreetPlayer_NoReward.s")

GLOBAL_ASM("asm/BgDyYoseizo_HealPlayer_NoReward.s")

GLOBAL_ASM("asm/BgDyYoseizo_OverrideLimbDraw.s")

GLOBAL_ASM("asm/BgDyYoseizo_SayFarewell_NoReward.s")

GLOBAL_ASM("asm/BgDyYoseizo_SetupGreetPlayer_NoReward.s")

GLOBAL_ASM("asm/BgDyYoseizo_SetupHealPlayer_NoReward.s")

GLOBAL_ASM("asm/BgDyYoseizo_SetupSpinGrow_NoReward.s")

GLOBAL_ASM("asm/BgDyYoseizo_SetupSpinGrow_Reward.s")

GLOBAL_ASM("asm/BgDyYoseizo_SetupSpinShrink.s")

GLOBAL_ASM("asm/BgDyYoseizo_SpawnParticles.s")

GLOBAL_ASM("asm/BgDyYoseizo_SpinGrowSetupGive_Reward.s")

GLOBAL_ASM("asm/BgDyYoseizo_SpinGrow_NoReward.s")

GLOBAL_ASM("asm/BgDyYoseizo_SpinShrink.s")

GLOBAL_ASM("asm/BgDyYoseizo_Vanish.s")

}
