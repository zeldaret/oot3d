extern "C" {
#include "z_en_geldb.hpp"

#define FLAGS 0x00000015

void EnGeldB_Init(Actor* actor, GameState* state);
void EnGeldB_Destroy(Actor* actor, GameState* state);
void EnGeldB_Update(Actor* actor, GameState* state);
void EnGeldB_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_GeldB.data.s")

ActorInit En_GeldB_InitVars = {
    ACTOR_EN_GELDB,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_GELDB,
    sizeof(EnGeldB),
    (ActorFunc)EnGeldB_Init,
    (ActorFunc)EnGeldB_Destroy,
    (ActorFunc)EnGeldB_Update,
    (ActorFunc)EnGeldB_Draw,
};

GLOBAL_ASM("asm/EnGeldB_Init.s")

GLOBAL_ASM("asm/EnGeldB_Destroy.s")

GLOBAL_ASM("asm/EnGeldB_Update.s")

GLOBAL_ASM("asm/EnGeldB_Draw.s")

GLOBAL_ASM("asm/EnGeldB_Advance.s")

GLOBAL_ASM("asm/EnGeldB_Block.s")

GLOBAL_ASM("asm/EnGeldB_Circle.s")

GLOBAL_ASM("asm/EnGeldB_Damaged.s")

GLOBAL_ASM("asm/EnGeldB_Defeated.s")

GLOBAL_ASM("asm/EnGeldB_DodgeRanged.s")

GLOBAL_ASM("asm/EnGeldB_Flee.s")

GLOBAL_ASM("asm/EnGeldB_Jump.s")

GLOBAL_ASM("asm/EnGeldB_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnGeldB_Pivot.s")

GLOBAL_ASM("asm/EnGeldB_PostLimbDraw.s")

GLOBAL_ASM("asm/EnGeldB_ReactToPlayer.s")

GLOBAL_ASM("asm/EnGeldB_Ready.s")

GLOBAL_ASM("asm/EnGeldB_RollBack.s")

GLOBAL_ASM("asm/EnGeldB_RollForward.s")

GLOBAL_ASM("asm/EnGeldB_SetupAdvance.s")

GLOBAL_ASM("asm/EnGeldB_SetupBlock.s")

GLOBAL_ASM("asm/EnGeldB_SetupCircle.s")

GLOBAL_ASM("asm/EnGeldB_SetupJump.s")

GLOBAL_ASM("asm/EnGeldB_SetupReady.s")

GLOBAL_ASM("asm/EnGeldB_SetupRollBack.s")

GLOBAL_ASM("asm/EnGeldB_SetupSideStep.s")

GLOBAL_ASM("asm/EnGeldB_SetupSpinDodge.s")

GLOBAL_ASM("asm/EnGeldB_Sidestep.s")

GLOBAL_ASM("asm/EnGeldB_Slash.s")

GLOBAL_ASM("asm/EnGeldB_SpinAttack.s")

GLOBAL_ASM("asm/EnGeldB_SpinDodge.s")

GLOBAL_ASM("asm/EnGeldB_Stunned.s")

GLOBAL_ASM("asm/EnGeldB_Wait.s")

}
