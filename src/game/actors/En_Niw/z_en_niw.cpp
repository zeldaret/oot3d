extern "C" {
#include "z_en_niw.hpp"

#define FLAGS 0x00800010

void EnNiw_Init(Actor* actor, GameState* state);
void EnNiw_Destroy(Actor* actor, GameState* state);
void EnNiw_Update(Actor* actor, GameState* state);
void EnNiw_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Niw.data.s")

ActorInit En_Niw_InitVars = {
    ACTOR_EN_NIW,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_NIW,
    sizeof(EnNiw),
    (ActorFunc)EnNiw_Init,
    (ActorFunc)EnNiw_Destroy,
    (ActorFunc)EnNiw_Update,
    (ActorFunc)EnNiw_Draw,
};

GLOBAL_ASM("asm/EnNiw_Init.s")

GLOBAL_ASM("asm/EnNiw_Destroy.s")

GLOBAL_ASM("asm/EnNiw_Update.s")

GLOBAL_ASM("asm/EnNiw_Draw.s")
}
