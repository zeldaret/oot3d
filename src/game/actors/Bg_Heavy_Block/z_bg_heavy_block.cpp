extern "C" {
#include "z_bg_heavy_block.hpp"

#define FLAGS 0x80000000

void BgHeavyBlock_Init(Actor* actor, GameState* state);
void BgHeavyBlock_Destroy(Actor* actor, GameState* state);
void BgHeavyBlock_Update(Actor* actor, GameState* state);
void BgHeavyBlock_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Heavy_Block.data.s")

ActorInit Bg_Heavy_Block_InitVars = {
    ACTOR_BG_HEAVY_BLOCK,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HEAVY_OBJECT,
    sizeof(BgHeavyBlock),
    (ActorFunc)BgHeavyBlock_Init,
    (ActorFunc)BgHeavyBlock_Destroy,
    (ActorFunc)BgHeavyBlock_Update,
    (ActorFunc)BgHeavyBlock_Draw,
};

GLOBAL_ASM("asm/BgHeavyBlock_Init.s")

GLOBAL_ASM("asm/BgHeavyBlock_Destroy.s")

GLOBAL_ASM("asm/BgHeavyBlock_Update.s")

GLOBAL_ASM("asm/BgHeavyBlock_Draw.s")
}
