extern "C" {
#include "z_en_blkobj.hpp"

#define FLAGS 0x00400030

void EnBlkobj_Init(Actor* actor, GameState* state);
void EnBlkobj_Destroy(Actor* actor, GameState* state);
void EnBlkobj_Update(Actor* actor, GameState* state);
void EnBlkobj_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Blkobj.data.s")

ActorInit En_Blkobj_InitVars = {
    ACTOR_EN_BLKOBJ,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_BLKOBJ,
    sizeof(EnBlkobj),
    (ActorFunc)EnBlkobj_Init,
    (ActorFunc)EnBlkobj_Destroy,
    (ActorFunc)EnBlkobj_Update,
    (ActorFunc)EnBlkobj_Draw,
};

GLOBAL_ASM("asm/EnBlkobj_Init.s")

GLOBAL_ASM("asm/EnBlkobj_Destroy.s")

GLOBAL_ASM("asm/EnBlkobj_Update.s")

GLOBAL_ASM("asm/EnBlkobj_Draw.s")
}
