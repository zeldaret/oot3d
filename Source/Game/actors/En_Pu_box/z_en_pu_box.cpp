extern "C" {
#include "z_en_pu_box.hpp"

#define FLAGS 0x80000010

void EnPubox_Init(Actor* actor, GameState* state);
void EnPubox_Destroy(Actor* actor, GameState* state);
void EnPubox_Update(Actor* actor, GameState* state);
void EnPubox_Draw(Actor* actor, GameState* state);

ActorInit En_Pu_box_InitVars = {
    ACTOR_EN_PU_BOX,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_PU_BOX,
    sizeof(EnPubox),
    (ActorFunc)EnPubox_Init,
    (ActorFunc)EnPubox_Destroy,
    (ActorFunc)EnPubox_Update,
    (ActorFunc)EnPubox_Draw,
};

GLOBAL_ASM("asm/EnPubox_Init.s")

GLOBAL_ASM("asm/EnPubox_Destroy.s")

GLOBAL_ASM("asm/EnPubox_Update.s")

GLOBAL_ASM("asm/EnPubox_Draw.s")
}
