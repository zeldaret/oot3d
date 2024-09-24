extern "C" {
#include "z_bg_bowl_wall.hpp"

#define FLAGS 0x80400030

void BgBowlWall_Init(Actor* actor, GameState* state);
void BgBowlWall_Destroy(Actor* actor, GameState* state);
void BgBowlWall_Update(Actor* actor, GameState* state);
void BgBowlWall_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Bowl_Wall.data.s")

ActorInit Bg_Bowl_Wall_InitVars = {
    ACTOR_BG_BOWL_WALL,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_BOWL,
    sizeof(BgBowlWall),
    (ActorFunc)BgBowlWall_Init,
    (ActorFunc)BgBowlWall_Destroy,
    (ActorFunc)BgBowlWall_Update,
    (ActorFunc)BgBowlWall_Draw,
};

GLOBAL_ASM("asm/BgBowlWall_Init.s")

GLOBAL_ASM("asm/BgBowlWall_Destroy.s")

GLOBAL_ASM("asm/BgBowlWall_Update.s")

GLOBAL_ASM("asm/BgBowlWall_Draw.s")
}
