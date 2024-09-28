extern "C" {
#include "z_en_syateki_man.hpp"

#define FLAGS 0x08000019

void EnSyatekiMan_Init(Actor* actor, GameState* state);
void EnSyatekiMan_Destroy(Actor* actor, GameState* state);
void EnSyatekiMan_Update(Actor* actor, GameState* state);
void EnSyatekiMan_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Syateki_Man.data.s")

ActorInit En_Syateki_Man_InitVars = {
    ACTOR_EN_SYATEKI_MAN,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_OSSAN,
    sizeof(EnSyatekiMan),
    (ActorFunc)EnSyatekiMan_Init,
    (ActorFunc)EnSyatekiMan_Destroy,
    (ActorFunc)EnSyatekiMan_Update,
    (ActorFunc)EnSyatekiMan_Draw,
};

GLOBAL_ASM("asm/EnSyatekiMan_Init.s")

GLOBAL_ASM("asm/EnSyatekiMan_Destroy.s")

GLOBAL_ASM("asm/EnSyatekiMan_Update.s")

GLOBAL_ASM("asm/EnSyatekiMan_Draw.s")
}
