extern "C" {
#include "z_en_ge2.hpp"

#define FLAGS 0x00000019

void EnGe2_Init(Actor* actor, GameState* state);
void EnGe2_Destroy(Actor* actor, GameState* state);
void EnGe2_Update(Actor* actor, GameState* state);
void EnGe2_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ge2.data.s")

ActorInit En_Ge2_InitVars = {
    ACTOR_EN_GE2,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GLA,
    sizeof(EnGe2),
    (ActorFunc)EnGe2_Init,
    (ActorFunc)EnGe2_Destroy,
    (ActorFunc)EnGe2_Update,
    (ActorFunc)EnGe2_Draw,
};

GLOBAL_ASM("asm/EnGe2_Init.s")

GLOBAL_ASM("asm/EnGe2_Destroy.s")

GLOBAL_ASM("asm/EnGe2_Update.s")

GLOBAL_ASM("asm/EnGe2_Draw.s")

GLOBAL_ASM("asm/EnGe2_AboutTurn.s")

GLOBAL_ASM("asm/EnGe2_CaptureCharge.s")

GLOBAL_ASM("asm/EnGe2_CaptureClose.s")

GLOBAL_ASM("asm/EnGe2_CaptureTurn.s")

GLOBAL_ASM("asm/EnGe2_ChangeAction.s")

GLOBAL_ASM("asm/EnGe2_ForceTalk.s")

GLOBAL_ASM("asm/EnGe2_ForceTalk_003ee394.s")

GLOBAL_ASM("asm/EnGe2_KnockedOut.s")

GLOBAL_ASM("asm/EnGe2_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnGe2_PostLimbDraw.s")

GLOBAL_ASM("asm/EnGe2_Stand.s")

GLOBAL_ASM("asm/EnGe2_TurnPlayerSpotted.s")

GLOBAL_ASM("asm/EnGe2_UpdateAfterTalk.s")

GLOBAL_ASM("asm/EnGe2_UpdateFriendly.s")

GLOBAL_ASM("asm/EnGe2_UpdateStunned.s")

GLOBAL_ASM("asm/EnGe2_WaitLookAtPlayer.s")

GLOBAL_ASM("asm/EnGe2_Walk.s")

}
