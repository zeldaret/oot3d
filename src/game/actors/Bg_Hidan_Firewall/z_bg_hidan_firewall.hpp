#ifndef _Z_BG_HIDAN_FIREWALL_H_
#define _Z_BG_HIDAN_FIREWALL_H_

#include "global.hpp"

struct BgHidanFirewall;

typedef void (*BgHidanFirewallActionFunc)(struct BgHidanFirewall*, PlayState*);

typedef struct BgHidanFirewall {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ BgHidanFirewallActionFunc actionFunc;
    /* 0x01A8 */ s16 unk_1A8;
    /* 0x01AC */ ColliderCylinder collider;
    /* 0x0204 */ SkeletonAnimationModel* skelAnimModel;
} BgHidanFirewall; // size = 0x208

extern ActorInit Bg_Hidan_Firewall_InitVars;

#endif
