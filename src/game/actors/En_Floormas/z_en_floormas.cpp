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

GLOBAL_ASM("asm/EnFloormas_BigDecideAction.s")

GLOBAL_ASM("asm/EnFloormas_BigWalk.s")

GLOBAL_ASM("asm/EnFloormas_Charge.s")

GLOBAL_ASM("asm/EnFloormas_DrawHighlighted.s")

GLOBAL_ASM("asm/EnFloormas_Hover.s")

GLOBAL_ASM("asm/EnFloormas_Land.s")

GLOBAL_ASM("asm/EnFloormas_Merge.s")

GLOBAL_ASM("asm/EnFloormas_Run.s")

GLOBAL_ASM("asm/EnFloormas_SetupLand.s")

GLOBAL_ASM("asm/EnFloormas_SetupStand.s")

GLOBAL_ASM("asm/EnFloormas_Slide.s")

GLOBAL_ASM("asm/EnFloormas_SmWait.s")

GLOBAL_ASM("asm/EnFloormas_Stand.s")

GLOBAL_ASM("asm/EnFloormas_Turn.s")

}
