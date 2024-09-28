#ifndef _Z_OBJ_KIBAKO2_H_
#define _Z_OBJ_KIBAKO2_H_

#include "global.hpp"

struct ObjKibako2;

typedef void (*ObjKibako2ActionFunc)(struct ObjKibako2*, PlayState*);

typedef struct ObjKibako2 {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x1BC */ ColliderCylinder collider;
    /* 0x214 */ ObjKibako2ActionFunc actionFunc;
    /* 0x218 */ s16 collectibleFlag;
    /* 0x21C */ SkeletonAnimationModel* skelAnimModel;
} ObjKibako2; // size = 0x220

extern ActorInit Obj_Kibako2_InitVars;

#endif
