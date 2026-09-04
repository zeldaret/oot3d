extern "C" {
#include "z_en_box.hpp"

#define FLAGS 0x00000000

void EnBox_Init(Actor* actor, GameState* state);
void EnBox_Destroy(Actor* actor, GameState* state);
void EnBox_Update(Actor* actor, GameState* state);
void EnBox_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Box.data.s")

ActorInit En_Box_InitVars = {
    ACTOR_EN_BOX,
    ACTORCAT_CHEST,
    FLAGS,
    OBJECT_BOX,
    sizeof(EnBox),
    (ActorFunc)EnBox_Init,
    (ActorFunc)EnBox_Destroy,
    (ActorFunc)EnBox_Update,
    (ActorFunc)EnBox_Draw,
};

GLOBAL_ASM("asm/EnBox_Init.s")

GLOBAL_ASM("asm/EnBox_Destroy.s")

GLOBAL_ASM("asm/EnBox_Update.s")

GLOBAL_ASM("asm/EnBox_Draw.s")

GLOBAL_ASM("asm/EnBox_AppearAnimation.s")

GLOBAL_ASM("asm/EnBox_AppearInit.s")

GLOBAL_ASM("asm/EnBox_AppearOnRoomClear.s")

GLOBAL_ASM("asm/EnBox_AppearOnSwitchFlag.s")

GLOBAL_ASM("asm/EnBox_Fall.s")

GLOBAL_ASM("asm/EnBox_FallOnSwitchFlag.s")

GLOBAL_ASM("asm/EnBox_Open.s")

GLOBAL_ASM("asm/EnBox_WaitOpen.s")

GLOBAL_ASM("asm/FUN_0027f34c.s")

GLOBAL_ASM("asm/FUN_00290ce0.s")

GLOBAL_ASM("asm/FUN_00387fd0.s")

}
