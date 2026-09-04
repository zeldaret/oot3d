extern "C" {
#include "z_en_peehat.hpp"

#define FLAGS 0x01000015

void EnPeehat_Init(Actor* actor, GameState* state);
void EnPeehat_Destroy(Actor* actor, GameState* state);
void EnPeehat_Update(Actor* actor, GameState* state);
void EnPeehat_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Peehat.data.s")

ActorInit En_Peehat_InitVars = {
    ACTOR_EN_PEEHAT,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_PEEHAT,
    sizeof(EnPeehat),
    (ActorFunc)EnPeehat_Init,
    (ActorFunc)EnPeehat_Destroy,
    (ActorFunc)EnPeehat_Update,
    (ActorFunc)EnPeehat_Draw,
};

GLOBAL_ASM("asm/EnPeehat_Init.s")

GLOBAL_ASM("asm/EnPeehat_Destroy.s")

GLOBAL_ASM("asm/EnPeehat_Update.s")

GLOBAL_ASM("asm/EnPeehat_Draw.s")

GLOBAL_ASM("asm/EnPeehat_Adult_StateDie.s")

GLOBAL_ASM("asm/EnPeehat_Flying_SetStateGround.s")

GLOBAL_ASM("asm/EnPeehat_Flying_StateFly.s")

GLOBAL_ASM("asm/EnPeehat_Flying_StateGrounded.s")

GLOBAL_ASM("asm/EnPeehat_Flying_StateLanding.s")

GLOBAL_ASM("asm/EnPeehat_Ground_SetStateHover.s")

GLOBAL_ASM("asm/EnPeehat_Ground_SetStateLanding.s")

GLOBAL_ASM("asm/EnPeehat_Ground_SetStateReturnHome.s")

GLOBAL_ASM("asm/EnPeehat_Ground_StateGround.s")

GLOBAL_ASM("asm/EnPeehat_Ground_StateLanding.s")

GLOBAL_ASM("asm/EnPeehat_Ground_StateReturnHome.s")

GLOBAL_ASM("asm/EnPeehat_Ground_StateRise.s")

GLOBAL_ASM("asm/EnPeehat_Ground_StateSeekPlayer.s")

GLOBAL_ASM("asm/EnPeehat_Larva_StateSeekPlayer.s")

GLOBAL_ASM("asm/EnPeehat_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnPeehat_PostLimbDraw.s")

GLOBAL_ASM("asm/EnPeehat_SpawnDust.s")

GLOBAL_ASM("asm/EnPeehat_StateAttackRecoil.s")

GLOBAL_ASM("asm/EnPeehat_StateBoomerangStunned.s")

GLOBAL_ASM("asm/EnPeehat_StateExplode.s")

GLOBAL_ASM("asm/FUN_00323698.s")

GLOBAL_ASM("asm/FUN_003255d0.s")

}
