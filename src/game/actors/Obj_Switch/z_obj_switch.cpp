extern "C" {
#include "z_obj_switch.hpp"

#define FLAGS 0x00000010

void ObjSwitch_Init(Actor* actor, GameState* state);
void ObjSwitch_Destroy(Actor* actor, GameState* state);
void ObjSwitch_Update(Actor* actor, GameState* state);
void ObjSwitch_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Switch.data.s")

ActorInit Obj_Switch_InitVars = {
    ACTOR_OBJ_SWITCH,
    ACTORCAT_SWITCH,
    FLAGS,
    OBJECT_GAMEPLAY_DANGEON_KEEP,
    sizeof(ObjSwitch),
    (ActorFunc)ObjSwitch_Init,
    (ActorFunc)ObjSwitch_Destroy,
    (ActorFunc)ObjSwitch_Update,
    (ActorFunc)ObjSwitch_Draw,
};

GLOBAL_ASM("asm/ObjSwitch_Init.s")

GLOBAL_ASM("asm/ObjSwitch_Destroy.s")

GLOBAL_ASM("asm/ObjSwitch_Update.s")

GLOBAL_ASM("asm/ObjSwitch_Draw.s")

GLOBAL_ASM("asm/ObjSwitch_CrystalOff.s")

GLOBAL_ASM("asm/ObjSwitch_CrystalOn.s")

GLOBAL_ASM("asm/ObjSwitch_CrystalTurnOff.s")

GLOBAL_ASM("asm/ObjSwitch_CrystalTurnOn.s")

GLOBAL_ASM("asm/ObjSwitch_EyeClosed.s")

GLOBAL_ASM("asm/ObjSwitch_EyeClosing.s")

GLOBAL_ASM("asm/ObjSwitch_EyeInit.s")

GLOBAL_ASM("asm/ObjSwitch_EyeOpen.s")

GLOBAL_ASM("asm/ObjSwitch_EyeOpening.s")

GLOBAL_ASM("asm/ObjSwitch_FloorDown.s")

GLOBAL_ASM("asm/ObjSwitch_FloorPress.s")

GLOBAL_ASM("asm/ObjSwitch_FloorRelease.s")

GLOBAL_ASM("asm/ObjSwitch_FloorUp.s")

GLOBAL_ASM("asm/ObjSwitch_InitTrisCollider.s")

GLOBAL_ASM("asm/ObjSwitch_SetOff.s")

GLOBAL_ASM("asm/ObjSwitch_SetOn.s")

GLOBAL_ASM("asm/FUN_001cf0e4.s")

GLOBAL_ASM("asm/FUN_001cf100.s")

GLOBAL_ASM("asm/FUN_001eb278.s")

}
