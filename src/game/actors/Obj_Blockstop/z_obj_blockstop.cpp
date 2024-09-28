extern "C" {
#include "z_obj_blockstop.hpp"

#define FLAGS 0x00000000

void ObjBlockstop_Init(Actor* actor, GameState* state);
void ObjBlockstop_Destroy(Actor* actor, GameState* state);
void ObjBlockstop_Update(Actor* actor, GameState* state);

ActorInit Obj_Blockstop_InitVars = {
    ACTOR_OBJ_BLOCKSTOP,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ObjBlockstop),
    (ActorFunc)ObjBlockstop_Init,
    (ActorFunc)ObjBlockstop_Destroy,
    (ActorFunc)ObjBlockstop_Update,
    NULL,
};

GLOBAL_ASM("asm/ObjBlockstop_Init.s")

GLOBAL_ASM("asm/ObjBlockstop_Destroy.s")

GLOBAL_ASM("asm/ObjBlockstop_Update.s")
}
