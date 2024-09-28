extern "C" {
#include "z_bg_spot18_obj.hpp"

#define FLAGS 0x80400000

void BgSpot18Obj_Init(Actor* actor, GameState* state);
void BgSpot18Obj_Destroy(Actor* actor, GameState* state);
void BgSpot18Obj_Update(Actor* actor, GameState* state);
void BgSpot18Obj_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot18_Obj.data.s")

ActorInit Bg_Spot18_Obj_InitVars = {
    ACTOR_BG_SPOT18_OBJ,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT18_OBJ,
    sizeof(BgSpot18Obj),
    (ActorFunc)BgSpot18Obj_Init,
    (ActorFunc)BgSpot18Obj_Destroy,
    (ActorFunc)BgSpot18Obj_Update,
    (ActorFunc)BgSpot18Obj_Draw,
};

GLOBAL_ASM("asm/BgSpot18Obj_Init.s")

GLOBAL_ASM("asm/BgSpot18Obj_Destroy.s")

GLOBAL_ASM("asm/BgSpot18Obj_Update.s")

GLOBAL_ASM("asm/BgSpot18Obj_Draw.s")
}
