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
}
