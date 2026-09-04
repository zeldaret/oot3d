extern "C" {
#include "z_en_dnt_jiji.hpp"

#define FLAGS 0x00000019

void EnDntJiji_Init(Actor* actor, GameState* state);
void EnDntJiji_Destroy(Actor* actor, GameState* state);
void EnDntJiji_Update(Actor* actor, GameState* state);
void EnDntJiji_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Dnt_Jiji.data.s")

ActorInit En_Dnt_Jiji_InitVars = {
    ACTOR_EN_DNT_JIJI,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DNS,
    sizeof(EnDntJiji),
    (ActorFunc)EnDntJiji_Init,
    (ActorFunc)EnDntJiji_Destroy,
    (ActorFunc)EnDntJiji_Update,
    (ActorFunc)EnDntJiji_Draw,
};

GLOBAL_ASM("asm/EnDntJiji_Init.s")

GLOBAL_ASM("asm/EnDntJiji_Destroy.s")

GLOBAL_ASM("asm/EnDntJiji_Update.s")

GLOBAL_ASM("asm/EnDntJiji_Draw.s")

GLOBAL_ASM("asm/EnDntJiji_Burrow.s")

GLOBAL_ASM("asm/EnDntJiji_Cower.s")

GLOBAL_ASM("asm/EnDntJiji_GivePrize.s")

GLOBAL_ASM("asm/EnDntJiji_Hide.s")

GLOBAL_ASM("asm/EnDntJiji_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnDntJiji_PostLimbDraw.s")

GLOBAL_ASM("asm/EnDntJiji_Return.s")

GLOBAL_ASM("asm/EnDntJiji_SetFlower.s")

GLOBAL_ASM("asm/EnDntJiji_SetupBurrow.s")

GLOBAL_ASM("asm/EnDntJiji_SetupCower.s")

GLOBAL_ASM("asm/EnDntJiji_SetupGivePrize.s")

GLOBAL_ASM("asm/EnDntJiji_SetupHide.s")

GLOBAL_ASM("asm/EnDntJiji_SetupReturn.s")

GLOBAL_ASM("asm/EnDntJiji_SetupTalk.s")

GLOBAL_ASM("asm/EnDntJiji_SetupUnburrow.s")

GLOBAL_ASM("asm/EnDntJiji_SetupUp.s")

GLOBAL_ASM("asm/EnDntJiji_SetupWait.s")

GLOBAL_ASM("asm/EnDntJiji_SetupWalk.s")

GLOBAL_ASM("asm/EnDntJiji_Talk.s")

GLOBAL_ASM("asm/EnDntJiji_Unburrow.s")

GLOBAL_ASM("asm/EnDntJiji_Up.s")

GLOBAL_ASM("asm/EnDntJiji_Wait.s")

GLOBAL_ASM("asm/EnDntJiji_Walk.s")

}
