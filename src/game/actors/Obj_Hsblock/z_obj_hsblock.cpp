extern "C" {
#include "z_obj_hsblock.hpp"

#define FLAGS 0x00000000

void ObjHsblock_Init(Actor* actor, GameState* state);
void ObjHsblock_Destroy(Actor* actor, GameState* state);
void ObjHsblock_Update(Actor* actor, GameState* state);
void ObjHsblock_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Hsblock.data.s")

ActorInit Obj_Hsblock_InitVars = {
    ACTOR_OBJ_HSBLOCK,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_D_HSBLOCK,
    sizeof(ObjHsblock),
    (ActorFunc)ObjHsblock_Init,
    (ActorFunc)ObjHsblock_Destroy,
    (ActorFunc)ObjHsblock_Update,
    (ActorFunc)ObjHsblock_Draw,
};

GLOBAL_ASM("asm/ObjHsblock_Init.s")

GLOBAL_ASM("asm/ObjHsblock_Destroy.s")

GLOBAL_ASM("asm/ObjHsblock_Update.s")

GLOBAL_ASM("asm/ObjHsblock_Draw.s")
}
