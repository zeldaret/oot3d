extern "C" {
#include "z_elf_msg2.hpp"

#define FLAGS 0x00000010

void ElfMsg2_Init(Actor* actor, GameState* state);
void ElfMsg2_Destroy(Actor* actor, GameState* state);
void ElfMsg2_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Elf_Msg2.data.s")

ActorInit Elf_Msg2_InitVars = {
    ACTOR_ELF_MSG2,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ElfMsg2),
    (ActorFunc)ElfMsg2_Init,
    (ActorFunc)ElfMsg2_Destroy,
    (ActorFunc)ElfMsg2_Update,
    NULL,
};

GLOBAL_ASM("asm/ElfMsg2_Init.s")

GLOBAL_ASM("asm/ElfMsg2_Destroy.s")

GLOBAL_ASM("asm/ElfMsg2_Update.s")
}
