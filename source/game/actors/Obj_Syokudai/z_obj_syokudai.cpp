extern "C" {
#include "z_obj_syokudai.hpp"

#define FLAGS 0x00000410

void ObjSyokudai_Init(Actor* actor, GameState* state);
void ObjSyokudai_Destroy(Actor* actor, GameState* state);
void ObjSyokudai_Update(Actor* actor, GameState* state);
void ObjSyokudai_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Syokudai.data.s")

ActorInit Obj_Syokudai_InitVars = {
    ACTOR_OBJ_SYOKUDAI,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_SYOKUDAI,
    sizeof(ObjSyokudai),
    (ActorFunc)ObjSyokudai_Init,
    (ActorFunc)ObjSyokudai_Destroy,
    (ActorFunc)ObjSyokudai_Update,
    (ActorFunc)ObjSyokudai_Draw,
};

GLOBAL_ASM("asm/ObjSyokudai_Init.s")

GLOBAL_ASM("asm/ObjSyokudai_Destroy.s")

GLOBAL_ASM("asm/ObjSyokudai_Update.s")

GLOBAL_ASM("asm/ObjSyokudai_Draw.s")
}
