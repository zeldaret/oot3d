extern "C" {
#include "z_bg_ice_shelter.hpp"

#define FLAGS 0x00400010

void BgIceShelter_Init(Actor* actor, GameState* state);
void BgIceShelter_Destroy(Actor* actor, GameState* state);
void BgIceShelter_Update(Actor* actor, GameState* state);
void BgIceShelter_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Ice_Shelter.data.s")

ActorInit Bg_Ice_Shelter_InitVars = {
    ACTOR_BG_ICE_SHELTER,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_ICE_OBJECTS,
    sizeof(BgIceShelter),
    (ActorFunc)BgIceShelter_Init,
    (ActorFunc)BgIceShelter_Destroy,
    (ActorFunc)BgIceShelter_Update,
    (ActorFunc)BgIceShelter_Draw,
};

GLOBAL_ASM("asm/BgIceShelter_Init.s")

GLOBAL_ASM("asm/BgIceShelter_Destroy.s")

GLOBAL_ASM("asm/BgIceShelter_Update.s")

GLOBAL_ASM("asm/BgIceShelter_Draw.s")
}
