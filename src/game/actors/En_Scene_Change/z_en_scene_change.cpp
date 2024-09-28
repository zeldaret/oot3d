extern "C" {
#include "z_en_scene_change.hpp"

#define FLAGS 0x80000000

void EnSceneChange_Init(Actor* actor, GameState* state);
void EnSceneChange_Destroy(Actor* actor, GameState* state);
void EnSceneChange_Update(Actor* actor, GameState* state);
void EnSceneChange_Draw(Actor* actor, GameState* state);

ActorInit En_Scene_Change_InitVars = {
    ACTOR_EN_SCENE_CHANGE,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_JJ,
    sizeof(EnSceneChange),
    (ActorFunc)EnSceneChange_Init,
    (ActorFunc)EnSceneChange_Destroy,
    (ActorFunc)EnSceneChange_Update,
    (ActorFunc)EnSceneChange_Draw,
};

GLOBAL_ASM("asm/EnSceneChange_Init.s")

GLOBAL_ASM("asm/EnSceneChange_Destroy.s")

GLOBAL_ASM("asm/EnSceneChange_Update.s")

GLOBAL_ASM("asm/EnSceneChange_Draw.s")
}
