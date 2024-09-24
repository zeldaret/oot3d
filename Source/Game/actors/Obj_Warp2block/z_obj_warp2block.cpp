extern "C" {
#include "z_obj_warp2block.hpp"

#define FLAGS 0x0A000031

void ObjWarp2block_Init(Actor* actor, GameState* state);
void ObjWarp2block_Destroy(Actor* actor, GameState* state);
void ObjWarp2block_Update(Actor* actor, GameState* state);
void ObjWarp2block_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Warp2block.data.s")

ActorInit Obj_Warp2block_InitVars = {
    ACTOR_OBJ_WARP2BLOCK,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_TIMEBLOCK,
    sizeof(ObjWarp2block),
    (ActorFunc)ObjWarp2block_Init,
    (ActorFunc)ObjWarp2block_Destroy,
    (ActorFunc)ObjWarp2block_Update,
    (ActorFunc)ObjWarp2block_Draw,
};

GLOBAL_ASM("asm/ObjWarp2block_Init.s")

GLOBAL_ASM("asm/ObjWarp2block_Destroy.s")

GLOBAL_ASM("asm/ObjWarp2block_Update.s")

GLOBAL_ASM("asm/ObjWarp2block_Draw.s")
}
