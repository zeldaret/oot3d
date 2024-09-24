extern "C" {
#include "z_en_part.hpp"

#define FLAGS 0x00000010

void EnPart_Init(Actor* actor, GameState* state);
void EnPart_Destroy(Actor* actor, GameState* state);
void EnPart_Update(Actor* actor, GameState* state);
void EnPart_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Part.data.s")

ActorInit En_Part_InitVars = {
    ACTOR_EN_PART,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnPart),
    (ActorFunc)EnPart_Init,
    (ActorFunc)EnPart_Destroy,
    (ActorFunc)EnPart_Update,
    (ActorFunc)EnPart_Draw,
};

GLOBAL_ASM("asm/EnPart_Init.s")

GLOBAL_ASM("asm/EnPart_Destroy.s")

GLOBAL_ASM("asm/EnPart_Update.s")

GLOBAL_ASM("asm/EnPart_Draw.s")
}
