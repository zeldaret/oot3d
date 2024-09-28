extern "C" {
#include "z_elf_msg.hpp"

#define FLAGS 0x00000010

void ElfMsg_Init(Actor* actor, GameState* state);
void ElfMsg_Destroy(Actor* actor, GameState* state);
void ElfMsg_Update(Actor* actor, GameState* state);
void ElfMsg_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Elf_Msg.data.s")

ActorInit Elf_Msg_InitVars = {
    ACTOR_ELF_MSG,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ElfMsg),
    (ActorFunc)ElfMsg_Init,
    (ActorFunc)ElfMsg_Destroy,
    (ActorFunc)ElfMsg_Update,
    (ActorFunc)ElfMsg_Draw,
};

GLOBAL_ASM("asm/ElfMsg_Init.s")

GLOBAL_ASM("asm/ElfMsg_Destroy.s")

GLOBAL_ASM("asm/ElfMsg_Update.s")

GLOBAL_ASM("asm/ElfMsg_Draw.s")
}
