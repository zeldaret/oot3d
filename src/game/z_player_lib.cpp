extern "C" {
#include "global.hpp"

s32 Player_HoldsHookshot(Player* player) {
    return (player->heldItemAction == 0x10 || player->heldItemAction == 0x11) ? 1 : 0;
}

s32 Player_GetExplosiveHeld(Player* player) {
    s32 heldItemAction = player->heldItemAction - 0x12;

    if (heldItemAction < 0) {
        return -1;
    }

    if (heldItemAction <= 1) {
        return heldItemAction;
    }

    return -1;
}

}
