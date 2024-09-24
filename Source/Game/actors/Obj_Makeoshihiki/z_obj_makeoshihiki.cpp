extern "C" {
#include "z_obj_makeoshihiki.hpp"

#define FLAGS 0x00000020

void ObjMakeoshihiki_Init(Actor* actor, GameState* state);
void ObjMakeoshihiki_Destroy(Actor* actor, GameState* state);
void ObjMakeoshihiki_Update(Actor* actor, GameState* state);
void ObjMakeoshihiki_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Makeoshihiki.data.s")

ActorInit Obj_Makeoshihiki_InitVars = {
    ACTOR_OBJ_MAKEOSHIHIKI,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_DANGEON_KEEP,
    sizeof(ObjMakeoshihiki),
    (ActorFunc)ObjMakeoshihiki_Init,
    (ActorFunc)Actor_Noop,
    (ActorFunc)Actor_Noop,
    (ActorFunc)ObjMakeoshihiki_Draw,
};

GLOBAL_ASM("asm/ObjMakeoshihiki_Init.s")

GLOBAL_ASM("asm/ObjMakeoshihiki_Draw.s")
}
