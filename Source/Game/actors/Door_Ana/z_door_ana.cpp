extern "C" {
#include "z_door_ana.hpp"

#define FLAGS 0x82400000

void DoorAna_Init(Actor* actor, GameState* state);
void DoorAna_Destroy(Actor* actor, GameState* state);
void DoorAna_Update(Actor* actor, GameState* state);
void DoorAna_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Door_Ana.data.s")

ActorInit Door_Ana_InitVars = {
    ACTOR_DOOR_ANA,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_FIELD_KEEP,
    sizeof(DoorAna),
    (ActorFunc)DoorAna_Init,
    (ActorFunc)DoorAna_Destroy,
    (ActorFunc)DoorAna_Update,
    (ActorFunc)DoorAna_Draw,
};

GLOBAL_ASM("asm/DoorAna_Init.s")

GLOBAL_ASM("asm/DoorAna_Destroy.s")

GLOBAL_ASM("asm/DoorAna_Update.s")

GLOBAL_ASM("asm/DoorAna_Draw.s")
}
