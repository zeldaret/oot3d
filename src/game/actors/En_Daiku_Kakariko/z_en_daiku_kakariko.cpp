extern "C" {
#include "z_en_daiku_kakariko.hpp"

#define FLAGS 0x00000019

void EnDaikuKakariko_Init(Actor* actor, GameState* state);
void EnDaikuKakariko_Destroy(Actor* actor, GameState* state);
void EnDaikuKakariko_Update(Actor* actor, GameState* state);
void EnDaikuKakariko_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Daiku_Kakariko.data.s")

ActorInit En_Daiku_Kakariko_InitVars = {
    ACTOR_EN_DAIKU_KAKARIKO,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DAIKU,
    sizeof(EnDaikuKakariko),
    (ActorFunc)EnDaikuKakariko_Init,
    (ActorFunc)EnDaikuKakariko_Destroy,
    (ActorFunc)EnDaikuKakariko_Update,
    (ActorFunc)EnDaikuKakariko_Draw,
};

GLOBAL_ASM("asm/EnDaikuKakariko_Init.s")

GLOBAL_ASM("asm/EnDaikuKakariko_Destroy.s")

GLOBAL_ASM("asm/EnDaikuKakariko_Update.s")

GLOBAL_ASM("asm/EnDaikuKakariko_Draw.s")

GLOBAL_ASM("asm/EnDaikuKakariko_HandleTalking.s")

GLOBAL_ASM("asm/EnDaikuKakariko_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnDaikuKakariko_PostLimbDraw.s")

GLOBAL_ASM("asm/EnDaikuKakariko_Run.s")

GLOBAL_ASM("asm/EnDaikuKakariko_SetAnimFromIndex.s")

GLOBAL_ASM("asm/EnDaikuKakariko_StopRunning.s")

GLOBAL_ASM("asm/EnDaikuKakariko_Talk.s")

GLOBAL_ASM("asm/EnDaikuKakariko_Wait.s")

}
