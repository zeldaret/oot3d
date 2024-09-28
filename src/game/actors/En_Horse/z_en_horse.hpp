#ifndef _Z_EN_HORSE_H_
#define _Z_EN_HORSE_H_

#include "global.hpp"

#define ENHORSE_BOOST                      (1 << 0)   /*         0x1 */
#define ENHORSE_BOOST_DECEL                (1 << 1)   /*         0x2 */
#define ENHORSE_JUMPING                    (1 << 2)   /*         0x4 */
#define ENHORSE_CALC_RIDER_POS             (1 << 3)   /*         0x8 */
#define ENHORSE_FORCE_REVERSING            (1 << 4)   /*        0x10 */
#define ENHORSE_FORCE_WALKING              (1 << 5)   /*        0x20 */
#define ENHORSE_FLAG_6                     (1 << 6)   /*        0x40 */
#define ENHORSE_FLAG_7                     (1 << 7)   /*        0x80 */
#define ENHORSE_FLAG_8                     (1 << 8)   /*       0x100 */
#define ENHORSE_FLAG_9                     (1 << 9)   /*       0x200 */
#define ENHORSE_STOPPING_NEIGH_SOUND       (1 << 10)  /*       0x400 */
#define ENHORSE_LAND2_SOUND                (1 << 11)  /*       0x800 */
#define ENHORSE_SANDDUST_SOUND             (1 << 12)  /*      0x1000 */
#define ENHORSE_INACTIVE                   (1 << 13)  /*      0x2000 */
#define ENHORSE_OBSTACLE                   (1 << 14)  /*      0x4000 */
#define ENHORSE_TURNING_TO_PLAYER          (1 << 15)  /*      0x8000 */
#define ENHORSE_UNRIDEABLE                 (1 << 16)  /*    0x1 0000 */
#define ENHORSE_CANT_JUMP                  (1 << 17)  /*    0x2 0000 */
#define ENHORSE_FLAG_18                    (1 << 18)  /*    0x4 0000 */
#define ENHORSE_FLAG_19                    (1 << 19)  /*    0x8 0000 */
#define ENHORSE_FLAG_20                    (1 << 20)  /*   0x10 0000 */
#define ENHORSE_FLAG_21                    (1 << 21)  /*   0x20 0000 */
#define ENHORSE_FIRST_BOOST_REGEN          (1 << 22)  /*   0x40 0000 */
#define ENHORSE_INGO_WON                   (1 << 23)  /*   0x80 0000 */
#define ENHORSE_FLAG_24                    (1 << 24)  /*  0x100 0000 */
#define ENHORSE_FLAG_25                    (1 << 25)  /*  0x200 0000 */
#define ENHORSE_FLAG_26                    (1 << 26)  /*  0x400 0000 */
#define ENHORSE_DRAW                       (1 << 27)  /*  0x800 0000 */
#define ENHORSE_FLAG_28                    (1 << 28)  /* 0x1000 0000 */
#define ENHORSE_FLAG_29                    (1 << 29)  /* 0x2000 0000 */
#define ENHORSE_FLAG_30                    (1 << 30)  /* 0x4000 0000 */
#define ENHORSE_FLAG_31                    (1 << 31)  /* 0x8000 0000 */

struct EnHorse;

typedef struct EnHorse {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xCB0];
    /* 0x0E54 */ s32 stateFlags;
    /* 0x0E58 */ char unk_E58[0x1BC];
    /* 0x1014 */ s32 inRace;
    /* 0x1018 */ char unk_1018[0x14];
    /* 0x102C */ s32 hbaStarted;
    /* 0x1030 */ char unk_1030[0x58];
    /* 0x1088 */ Vec3f unk_1088;
    /* 0x1094 */ char unk_1094[0x4];
} EnHorse; // size = 0x1098

extern ActorInit En_Horse_InitVars;

#endif
