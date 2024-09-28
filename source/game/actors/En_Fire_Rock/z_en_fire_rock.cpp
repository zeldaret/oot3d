extern "C" {
#include "z_en_fire_rock.hpp"

#define FLAGS 0x00000030

void EnFireRock_Init(Actor* actor, GameState* state);
void EnFireRock_Destroy(Actor* actor, GameState* state);
void EnFireRock_Update(Actor* actor, GameState* state);
void EnFireRock_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Fire_Rock.data.s")

ActorInit En_Fire_Rock_InitVars = {
    ACTOR_EN_FIRE_ROCK,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_EFC_STAR_FIELD,
    sizeof(EnFireRock),
    (ActorFunc)EnFireRock_Init,
    (ActorFunc)EnFireRock_Destroy,
    (ActorFunc)EnFireRock_Update,
    (ActorFunc)EnFireRock_Draw,
};

GLOBAL_ASM("asm/EnFireRock_Init.s")

GLOBAL_ASM("asm/EnFireRock_Destroy.s")

GLOBAL_ASM("asm/EnFireRock_Update.s")

GLOBAL_ASM("asm/EnFireRock_Draw.s")
}
