extern "C" {
#include "z_obj_comb.hpp"

#define FLAGS 0x80000000

void ObjComb_Init(Actor* actor, GameState* state);
void ObjComb_Destroy(Actor* actor, GameState* state);
void ObjComb_Update(Actor* actor, GameState* state);
void ObjComb_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Comb.data.s")

ActorInit Obj_Comb_InitVars = {
    ACTOR_OBJ_COMB,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_FIELD_KEEP,
    sizeof(ObjComb),
    (ActorFunc)ObjComb_Init,
    (ActorFunc)ObjComb_Destroy,
    (ActorFunc)ObjComb_Update,
    (ActorFunc)ObjComb_Draw,
};

GLOBAL_ASM("asm/ObjComb_Init.s")

GLOBAL_ASM("asm/ObjComb_Destroy.s")

GLOBAL_ASM("asm/ObjComb_Update.s")

GLOBAL_ASM("asm/ObjComb_Draw.s")
}
