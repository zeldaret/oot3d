extern "C" {
#include "z_en_tr.hpp"

#define FLAGS 0x00000010

void EnTr_Init(Actor* actor, GameState* state);
void EnTr_Destroy(Actor* actor, GameState* state);
void EnTr_Update(Actor* actor, GameState* state);
void EnTr_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Tr.data.s")

ActorInit En_Tr_InitVars = {
    ACTOR_EN_TR,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_TR,
    sizeof(EnTr),
    (ActorFunc)EnTr_Init,
    (ActorFunc)EnTr_Destroy,
    (ActorFunc)EnTr_Update,
    (ActorFunc)EnTr_Draw,
};

GLOBAL_ASM("asm/EnTr_Init.s")

GLOBAL_ASM("asm/EnTr_Destroy.s")

GLOBAL_ASM("asm/EnTr_Update.s")

GLOBAL_ASM("asm/EnTr_Draw.s")

GLOBAL_ASM("asm/EnTr_ChooseAction1.s")

GLOBAL_ASM("asm/EnTr_ChooseAction2.s")

GLOBAL_ASM("asm/EnTr_CrySpellcast.s")

GLOBAL_ASM("asm/EnTr_DoNothing.s")

GLOBAL_ASM("asm/EnTr_FlyKidnapCutscene.s")

GLOBAL_ASM("asm/EnTr_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnTr_Reappear.s")

GLOBAL_ASM("asm/EnTr_ShrinkVanish.s")

GLOBAL_ASM("asm/EnTr_TakeOff.s")

GLOBAL_ASM("asm/EnTr_TurnLookOverShoulder.s")

GLOBAL_ASM("asm/EnTr_WaitToReappear.s")

GLOBAL_ASM("asm/FUN_00327b50.s")

GLOBAL_ASM("asm/FUN_00353310.s")

}
