extern "C" {
#include "z_en_ge1.hpp"

#define FLAGS 0x00000009

void EnGe1_Init(Actor* actor, GameState* state);
void EnGe1_Destroy(Actor* actor, GameState* state);
void EnGe1_Update(Actor* actor, GameState* state);
void EnGe1_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ge1.data.s")

ActorInit En_Ge1_InitVars = {
    ACTOR_EN_GE1,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GE1,
    sizeof(EnGe1),
    (ActorFunc)EnGe1_Init,
    (ActorFunc)EnGe1_Destroy,
    (ActorFunc)EnGe1_Update,
    (ActorFunc)EnGe1_Draw,
};

GLOBAL_ASM("asm/EnGe1_Init.s")

GLOBAL_ASM("asm/EnGe1_Destroy.s")

GLOBAL_ASM("asm/EnGe1_Update.s")

GLOBAL_ASM("asm/EnGe1_Draw.s")

GLOBAL_ASM("asm/EnGe1_BeginGame_Archery.s")

GLOBAL_ASM("asm/EnGe1_BeginItemGive_Archery.s")

GLOBAL_ASM("asm/EnGe1_CheckGate_GateOp.s")

GLOBAL_ASM("asm/EnGe1_ChooseActionFromTextId.s")

GLOBAL_ASM("asm/EnGe1_CueUpAnimation.s")

GLOBAL_ASM("asm/EnGe1_DoNothing.s")

GLOBAL_ASM("asm/EnGe1_GetReaction_GateGuard.s")

GLOBAL_ASM("asm/EnGe1_GetReaction_ValleyFloor.s")

GLOBAL_ASM("asm/EnGe1_KickPlayer.s")

GLOBAL_ASM("asm/EnGe1_OpenGate_GateOp.s")

GLOBAL_ASM("asm/EnGe1_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnGe1_PostLimbDraw.s")

GLOBAL_ASM("asm/EnGe1_SetNormalText.s")

GLOBAL_ASM("asm/EnGe1_SetTalkAction.s")

GLOBAL_ASM("asm/EnGe1_SetupOpenGate_GateOp.s")

GLOBAL_ASM("asm/EnGe1_SetupWait_Archery.s")

GLOBAL_ASM("asm/EnGe1_StopFidget.s")

GLOBAL_ASM("asm/EnGe1_TalkAfterGame_Archery.s")

GLOBAL_ASM("asm/EnGe1_TalkNoHorse_Archery.s")

GLOBAL_ASM("asm/EnGe1_TalkNoPrize_Archery.s")

GLOBAL_ASM("asm/EnGe1_TalkOfferPlay_Archery.s")

GLOBAL_ASM("asm/EnGe1_TalkTooPoor_Archery.s")

GLOBAL_ASM("asm/EnGe1_TalkWinPrize_Archery.s")

GLOBAL_ASM("asm/EnGe1_WaitGateOpen_GateOp.s")

GLOBAL_ASM("asm/EnGe1_WaitTillItemGiven_Archery.s")

GLOBAL_ASM("asm/EnGe1_WaitUntilGateOpened_GateOp.s")

GLOBAL_ASM("asm/EnGe1_Wait_Archery.s")

GLOBAL_ASM("asm/EnGe1_WatchForAndSensePlayer.s")

GLOBAL_ASM("asm/EnGe1_WatchForPlayerFrontOnly.s")

}
