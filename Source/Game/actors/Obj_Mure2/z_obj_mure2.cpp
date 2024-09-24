extern "C" {
#include "z_obj_mure2.hpp"

#define FLAGS 0x00000000

void ObjMure2_Init(Actor* actor, GameState* state);
void ObjMure2_Destroy(Actor* actor, GameState* state);
void ObjMure2_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Mure2.data.s")

ActorInit Obj_Mure2_InitVars = {
    ACTOR_OBJ_MURE2,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ObjMure2),
    (ActorFunc)ObjMure2_Init,
    (ActorFunc)Actor_Noop,
    (ActorFunc)ObjMure2_Update,
    NULL,
};

GLOBAL_ASM("asm/ObjMure2_Init.s")

GLOBAL_ASM("asm/ObjMure2_Update.s")
}
