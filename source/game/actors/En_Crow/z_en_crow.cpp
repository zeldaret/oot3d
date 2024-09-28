extern "C" {
#include "z_en_crow.hpp"

#define FLAGS 0x00005005

void EnCrow_Init(Actor* actor, GameState* state);
void EnCrow_Destroy(Actor* actor, GameState* state);
void EnCrow_Update(Actor* actor, GameState* state);
void EnCrow_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Crow.data.s")

ActorInit En_Crow_InitVars = {
    ACTOR_EN_CROW,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_CROW,
    sizeof(EnCrow),
    (ActorFunc)EnCrow_Init,
    (ActorFunc)EnCrow_Destroy,
    (ActorFunc)EnCrow_Update,
    (ActorFunc)EnCrow_Draw,
};

GLOBAL_ASM("asm/EnCrow_Init.s")

GLOBAL_ASM("asm/EnCrow_Destroy.s")

GLOBAL_ASM("asm/EnCrow_Update.s")

GLOBAL_ASM("asm/EnCrow_Draw.s")
}
