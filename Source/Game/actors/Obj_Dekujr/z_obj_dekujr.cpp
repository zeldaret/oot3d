extern "C" {
#include "z_obj_dekujr.hpp"

#define FLAGS 0x00000039

void ObjDekujr_Init(Actor* actor, GameState* state);
void ObjDekujr_Destroy(Actor* actor, GameState* state);
void ObjDekujr_Update(Actor* actor, GameState* state);
void ObjDekujr_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Dekujr.data.s")

ActorInit Obj_Dekujr_InitVars = {
    ACTOR_OBJ_DEKUJR,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DEKUJR,
    sizeof(ObjDekujr),
    (ActorFunc)ObjDekujr_Init,
    (ActorFunc)ObjDekujr_Destroy,
    (ActorFunc)ObjDekujr_Update,
    (ActorFunc)ObjDekujr_Draw,
};

GLOBAL_ASM("asm/ObjDekujr_Init.s")

GLOBAL_ASM("asm/ObjDekujr_Destroy.s")

GLOBAL_ASM("asm/ObjDekujr_Update.s")

GLOBAL_ASM("asm/ObjDekujr_Draw.s")
}
