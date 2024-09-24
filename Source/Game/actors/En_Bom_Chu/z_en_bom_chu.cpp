extern "C" {
#include "z_en_bom_chu.hpp"

#define FLAGS 0x00000010

void EnBomChu_Init(Actor* actor, GameState* state);
void EnBomChu_Destroy(Actor* actor, GameState* state);
void EnBomChu_Update(Actor* actor, GameState* state);
void EnBomChu_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Bom_Chu.data.s")

ActorInit En_Bom_Chu_InitVars = {
    ACTOR_EN_BOM_CHU,
    ACTORCAT_EXPLOSIVES,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnBomChu),
    (ActorFunc)EnBomChu_Init,
    (ActorFunc)EnBomChu_Destroy,
    (ActorFunc)EnBomChu_Update,
    (ActorFunc)EnBomChu_Draw,
};

GLOBAL_ASM("asm/EnBomChu_Init.s")

GLOBAL_ASM("asm/EnBomChu_Destroy.s")

GLOBAL_ASM("asm/EnBomChu_Update.s")

GLOBAL_ASM("asm/EnBomChu_Draw.s")
}
