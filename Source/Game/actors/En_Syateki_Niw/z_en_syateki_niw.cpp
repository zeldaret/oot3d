extern "C" {
#include "z_en_syateki_niw.hpp"

#define FLAGS 0x00000010

void EnSyatekiNiw_Init(Actor* actor, GameState* state);
void EnSyatekiNiw_Destroy(Actor* actor, GameState* state);
void EnSyatekiNiw_Update(Actor* actor, GameState* state);
void EnSyatekiNiw_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Syateki_Niw.data.s")

ActorInit En_Syateki_Niw_InitVars = {
    ACTOR_EN_SYATEKI_NIW,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_NIW,
    sizeof(EnSyatekiNiw),
    (ActorFunc)EnSyatekiNiw_Init,
    (ActorFunc)EnSyatekiNiw_Destroy,
    (ActorFunc)EnSyatekiNiw_Update,
    (ActorFunc)EnSyatekiNiw_Draw,
};

GLOBAL_ASM("asm/EnSyatekiNiw_Init.s")

GLOBAL_ASM("asm/EnSyatekiNiw_Destroy.s")

GLOBAL_ASM("asm/EnSyatekiNiw_Update.s")

GLOBAL_ASM("asm/EnSyatekiNiw_Draw.s")
}
