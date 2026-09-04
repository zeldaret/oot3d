extern "C" {
#include "z_en_owl.hpp"

#define FLAGS 0x00000019

void EnOwl_Init(Actor* actor, GameState* state);
void EnOwl_Destroy(Actor* actor, GameState* state);
void EnOwl_Update(Actor* actor, GameState* state);
void EnOwl_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Owl.data.s")

ActorInit En_Owl_InitVars = {
    ACTOR_EN_OWL,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_OWL,
    sizeof(EnOwl),
    (ActorFunc)EnOwl_Init,
    (ActorFunc)EnOwl_Destroy,
    (ActorFunc)EnOwl_Update,
    (ActorFunc)EnOwl_Draw,
};

GLOBAL_ASM("asm/EnOwl_Init.s")

GLOBAL_ASM("asm/EnOwl_Destroy.s")

GLOBAL_ASM("asm/EnOwl_Update.s")

GLOBAL_ASM("asm/EnOwl_Draw.s")

GLOBAL_ASM("asm/EnOwl_ChangeMode.s")

GLOBAL_ASM("asm/EnOwl_CheckInitTalk.s")

GLOBAL_ASM("asm/EnOwl_ConfirmKokiriMessage.s")

GLOBAL_ASM("asm/EnOwl_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnOwl_PostLimbUpdate.s")

GLOBAL_ASM("asm/EnOwl_WaitDeathMountainShortcut.s")

GLOBAL_ASM("asm/EnOwl_WaitDefault.s")

GLOBAL_ASM("asm/EnOwl_WaitDesertColossus.s")

GLOBAL_ASM("asm/EnOwl_WaitGerudo.s")

GLOBAL_ASM("asm/EnOwl_WaitHyliaShortcut.s")

GLOBAL_ASM("asm/EnOwl_WaitHyruleCastle.s")

GLOBAL_ASM("asm/EnOwl_WaitKakariko.s")

GLOBAL_ASM("asm/EnOwl_WaitLWPostSaria.s")

GLOBAL_ASM("asm/EnOwl_WaitLWPreSaria.s")

GLOBAL_ASM("asm/EnOwl_WaitLakeHylia.s")

GLOBAL_ASM("asm/EnOwl_WaitOutsideKokiri.s")

GLOBAL_ASM("asm/EnOwl_WaitZoraRiver.s")

GLOBAL_ASM("asm/FUN_0015d054.s")

GLOBAL_ASM("asm/FUN_00160f44.s")

}
