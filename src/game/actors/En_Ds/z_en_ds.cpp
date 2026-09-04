extern "C" {
#include "z_en_ds.hpp"

#define FLAGS 0x00000009

void EnDs_Init(Actor* actor, GameState* state);
void EnDs_Destroy(Actor* actor, GameState* state);
void EnDs_Update(Actor* actor, GameState* state);
void EnDs_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ds.data.s")

ActorInit En_Ds_InitVars = {
    ACTOR_EN_DS,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DS,
    sizeof(EnDs),
    (ActorFunc)EnDs_Init,
    (ActorFunc)EnDs_Destroy,
    (ActorFunc)EnDs_Update,
    (ActorFunc)EnDs_Draw,
};

GLOBAL_ASM("asm/EnDs_Init.s")

GLOBAL_ASM("asm/EnDs_Destroy.s")

GLOBAL_ASM("asm/EnDs_Update.s")

GLOBAL_ASM("asm/EnDs_Draw.s")

GLOBAL_ASM("asm/EnDs_BrewOddPotion1.s")

GLOBAL_ASM("asm/EnDs_BrewOddPotion2.s")

GLOBAL_ASM("asm/EnDs_BrewOddPotion3.s")

GLOBAL_ASM("asm/EnDs_DisplayOddPotionText.s")

GLOBAL_ASM("asm/EnDs_GiveBluePotion.s")

GLOBAL_ASM("asm/EnDs_GiveOddPotion.s")

GLOBAL_ASM("asm/EnDs_OfferBluePotion.s")

GLOBAL_ASM("asm/EnDs_OfferOddPotion.s")

GLOBAL_ASM("asm/EnDs_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnDs_PostLimbDraw.s")

GLOBAL_ASM("asm/EnDs_Talk.s")

GLOBAL_ASM("asm/EnDs_TalkAfterBrewOddPotion.s")

GLOBAL_ASM("asm/EnDs_TalkAfterGiveOddPotion.s")

GLOBAL_ASM("asm/EnDs_TalkNoEmptyBottle.s")

GLOBAL_ASM("asm/EnDs_Wait.s")

}
