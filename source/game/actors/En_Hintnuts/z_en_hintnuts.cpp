extern "C" {
#include "z_en_hintnuts.hpp"

#define FLAGS 0x00000005

void EnHintnuts_Init(Actor* actor, GameState* state);
void EnHintnuts_Destroy(Actor* actor, GameState* state);
void EnHintnuts_Update(Actor* actor, GameState* state);
void EnHintnuts_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Hintnuts.data.s")

ActorInit En_Hintnuts_InitVars = {
    ACTOR_EN_HINTNUTS,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_HINTNUTS,
    sizeof(EnHintnuts),
    (ActorFunc)EnHintnuts_Init,
    (ActorFunc)EnHintnuts_Destroy,
    (ActorFunc)EnHintnuts_Update,
    (ActorFunc)EnHintnuts_Draw,
};

GLOBAL_ASM("asm/EnHintnuts_Init.s")

GLOBAL_ASM("asm/EnHintnuts_Destroy.s")

GLOBAL_ASM("asm/EnHintnuts_Update.s")

GLOBAL_ASM("asm/EnHintnuts_Draw.s")
}
