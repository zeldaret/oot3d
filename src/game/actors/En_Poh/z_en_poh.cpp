extern "C" {
#include "z_en_poh.hpp"

#define FLAGS 0x00001015

void EnPoh_Init(Actor* actor, GameState* state);
void EnPoh_Destroy(Actor* actor, GameState* state);
void EnPoh_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Poh.data_0052E0C0.s")
GLOBAL_ASM("data/z_En_Poh.data_0052E1C0.s")

ActorInit En_Poh_InitVars = {
    ACTOR_EN_POH,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnPoh),
    (ActorFunc)EnPoh_Init,
    (ActorFunc)EnPoh_Destroy,
    (ActorFunc)EnPoh_Update,
    NULL,
};

GLOBAL_ASM("asm/EnPoh_Init.s")

GLOBAL_ASM("asm/EnPoh_Destroy.s")

GLOBAL_ASM("asm/EnPoh_Update.s")
}
