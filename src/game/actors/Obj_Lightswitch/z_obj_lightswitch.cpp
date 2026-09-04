extern "C" {
#include "z_obj_lightswitch.hpp"

#define FLAGS 0x00000010

void ObjLightswitch_Init(Actor* actor, GameState* state);
void ObjLightswitch_Destroy(Actor* actor, GameState* state);
void ObjLightswitch_Update(Actor* actor, GameState* state);
void ObjLightswitch_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Lightswitch.data.s")

ActorInit Obj_Lightswitch_InitVars = {
    ACTOR_OBJ_LIGHTSWITCH,
    ACTORCAT_SWITCH,
    FLAGS,
    OBJECT_LIGHTSWITCH,
    sizeof(ObjLightswitch),
    (ActorFunc)ObjLightswitch_Init,
    (ActorFunc)ObjLightswitch_Destroy,
    (ActorFunc)ObjLightswitch_Update,
    (ActorFunc)ObjLightswitch_Draw,
};

GLOBAL_ASM("asm/ObjLightswitch_Init.s")

GLOBAL_ASM("asm/ObjLightswitch_Destroy.s")

GLOBAL_ASM("asm/ObjLightswitch_Update.s")

GLOBAL_ASM("asm/ObjLightswitch_Draw.s")

GLOBAL_ASM("asm/ObjLightswitch_Disappear.s")

GLOBAL_ASM("asm/ObjLightswitch_DisappearDelay.s")

GLOBAL_ASM("asm/ObjLightswitch_Off.s")

GLOBAL_ASM("asm/ObjLightswitch_On.s")

GLOBAL_ASM("asm/ObjLightswitch_TurnOff.s")

GLOBAL_ASM("asm/ObjLightswitch_TurnOn.s")

GLOBAL_ASM("asm/FUN_0036a84c.s")

}
