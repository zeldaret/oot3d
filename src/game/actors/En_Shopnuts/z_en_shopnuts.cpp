extern "C" {
#include "z_en_shopnuts.hpp"

#define FLAGS 0x00000005

void EnShopnuts_Init(Actor* actor, GameState* state);
void EnShopnuts_Destroy(Actor* actor, GameState* state);
void EnShopnuts_Update(Actor* actor, GameState* state);
void EnShopnuts_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Shopnuts.data.s")

ActorInit En_Shopnuts_InitVars = {
    ACTOR_EN_SHOPNUTS,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_SHOPNUTS,
    sizeof(EnShopnuts),
    (ActorFunc)EnShopnuts_Init,
    (ActorFunc)EnShopnuts_Destroy,
    (ActorFunc)EnShopnuts_Update,
    (ActorFunc)EnShopnuts_Draw,
};

GLOBAL_ASM("asm/EnShopnuts_Init.s")

GLOBAL_ASM("asm/EnShopnuts_Destroy.s")

GLOBAL_ASM("asm/EnShopnuts_Update.s")

GLOBAL_ASM("asm/EnShopnuts_Draw.s")
}
