extern "C" {
#include "z_en_go2.hpp"

#define FLAGS 0x00000039

void EnGo2_Init(Actor* actor, GameState* state);
void EnGo2_Destroy(Actor* actor, GameState* state);
void EnGo2_Update(Actor* actor, GameState* state);
void EnGo2_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Go2.data.s")

ActorInit En_Go2_InitVars = {
    ACTOR_EN_GO2,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_OF1D_MAP,
    sizeof(EnGo2),
    (ActorFunc)EnGo2_Init,
    (ActorFunc)EnGo2_Destroy,
    (ActorFunc)EnGo2_Update,
    (ActorFunc)EnGo2_Draw,
};

GLOBAL_ASM("asm/EnGo2_Init.s")

GLOBAL_ASM("asm/EnGo2_Destroy.s")

GLOBAL_ASM("asm/EnGo2_Update.s")

GLOBAL_ASM("asm/EnGo2_Draw.s")

GLOBAL_ASM("asm/EnGo2_ContinueRolling.s")

GLOBAL_ASM("asm/EnGo2_CurledUp.s")

GLOBAL_ASM("asm/EnGo2_GetDustData.s")

GLOBAL_ASM("asm/EnGo2_GetState.s")

GLOBAL_ASM("asm/EnGo2_GetTextId.s")

GLOBAL_ASM("asm/EnGo2_GoronLinkStopRolling.s")

GLOBAL_ASM("asm/EnGo2_GroundRolling.s")

GLOBAL_ASM("asm/EnGo2_IsRollingOnGround.s")

GLOBAL_ASM("asm/EnGo2_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnGo2_PostLimbDraw.s")

GLOBAL_ASM("asm/EnGo2_ReverseRolling.s")

GLOBAL_ASM("asm/EnGo2_SetGetItem.s")

GLOBAL_ASM("asm/EnGo2_SetupGetItem.s")

GLOBAL_ASM("asm/EnGo2_SetupRolling.s")

GLOBAL_ASM("asm/EnGo2_SlowRolling.s")

GLOBAL_ASM("asm/EnGo2_StopRolling.s")

GLOBAL_ASM("asm/FUN_0013449c.s")

}
