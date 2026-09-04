extern "C" {
#include "z_en_po_field.hpp"

#define FLAGS 0x00001035

void EnPoField_Init(Actor* actor, GameState* state);
void EnPoField_Destroy(Actor* actor, GameState* state);
void EnPoField_Update(Actor* actor, GameState* state);
void EnPoField_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Po_Field.data.s")

ActorInit En_Po_Field_InitVars = {
    ACTOR_EN_PO_FIELD,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_PO_FIELD,
    sizeof(EnPoField),
    (ActorFunc)EnPoField_Init,
    (ActorFunc)EnPoField_Destroy,
    (ActorFunc)EnPoField_Update,
    (ActorFunc)EnPoField_Draw,
};

GLOBAL_ASM("asm/EnPoField_Init.s")

GLOBAL_ASM("asm/EnPoField_Destroy.s")

GLOBAL_ASM("asm/EnPoField_Update.s")

GLOBAL_ASM("asm/EnPoField_Draw.s")

GLOBAL_ASM("asm/EnPoField_Appear.s")

GLOBAL_ASM("asm/EnPoField_CirclePlayer.s")

GLOBAL_ASM("asm/EnPoField_Damage.s")

GLOBAL_ASM("asm/EnPoField_Death.s")

GLOBAL_ASM("asm/EnPoField_Disappear.s")

GLOBAL_ASM("asm/EnPoField_Flee.s")

GLOBAL_ASM("asm/EnPoField_OverrideLimbDraw2.s")

GLOBAL_ASM("asm/EnPoField_PostLimDraw2.s")

GLOBAL_ASM("asm/EnPoField_SetupWaitForSpawn.s")

GLOBAL_ASM("asm/EnPoField_SoulDisappear.s")

GLOBAL_ASM("asm/EnPoField_SoulIdle.s")

GLOBAL_ASM("asm/EnPoField_SoulInteract.s")

GLOBAL_ASM("asm/EnPoField_SoulUpdateProperties.s")

GLOBAL_ASM("asm/EnPoField_UpdateDead.s")

GLOBAL_ASM("asm/EnPoField_WaitForSpawn.s")

GLOBAL_ASM("asm/FUN_001cd51c.s")

}
