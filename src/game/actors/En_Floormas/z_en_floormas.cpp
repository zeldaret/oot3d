extern "C" {
#include "z_en_floormas.hpp"

#define FLAGS 0x00000405

void EnFloormas_Init(Actor* actor, GameState* state);
void EnFloormas_Destroy(Actor* actor, GameState* state);
void EnFloormas_Update(Actor* actor, GameState* state);
void EnFloormas_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Floormas.data.s")

ActorInit En_Floormas_InitVars = {
    ACTOR_EN_FLOORMAS,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_WALLMASTER,
    sizeof(EnFloormas),
    (ActorFunc)EnFloormas_Init,
    (ActorFunc)EnFloormas_Destroy,
    (ActorFunc)EnFloormas_Update,
    (ActorFunc)EnFloormas_Draw,
};

GLOBAL_ASM("asm/EnFloormas_Init.s")

GLOBAL_ASM("asm/EnFloormas_Destroy.s")

GLOBAL_ASM("asm/EnFloormas_Update.s")

GLOBAL_ASM("asm/EnFloormas_Draw.s")
}
