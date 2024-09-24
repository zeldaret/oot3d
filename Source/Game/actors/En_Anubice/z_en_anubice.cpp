extern "C" {
#include "z_en_anubice.hpp"

#define FLAGS 0x00000015

void EnAnubice_Init(Actor* actor, GameState* state);
void EnAnubice_Destroy(Actor* actor, GameState* state);
void EnAnubice_Update(Actor* actor, GameState* state);
void EnAnubice_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Anubice.data.s")

ActorInit En_Anubice_InitVars = {
    ACTOR_EN_ANUBICE,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_ANUBICE,
    sizeof(EnAnubice),
    (ActorFunc)EnAnubice_Init,
    (ActorFunc)EnAnubice_Destroy,
    (ActorFunc)EnAnubice_Update,
    (ActorFunc)EnAnubice_Draw,
};

GLOBAL_ASM("asm/EnAnubice_Init.s")

GLOBAL_ASM("asm/EnAnubice_Destroy.s")

GLOBAL_ASM("asm/EnAnubice_Update.s")

GLOBAL_ASM("asm/EnAnubice_Draw.s")
}
