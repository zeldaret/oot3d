extern "C" {
#include "global.hpp"

// Init Vars declarations (also used in the table below)
#define DEFINE_ACTOR(name, _1, _2) extern ActorInit name##_InitVars;
#define DEFINE_ACTOR_INTERNAL(name, _1, _2) extern ActorInit name##_InitVars;
#define DEFINE_ACTOR_UNSET(_0)

#include "tables/actor_table.hpp"

#undef DEFINE_ACTOR
#undef DEFINE_ACTOR_INTERNAL
#undef DEFINE_ACTOR_UNSET

// Actor Overlay Table definition
#define DEFINE_ACTOR(name, _1, allocType) \
    { 0,  \
      0,    \
      NULL,          \
      NULL,            \
      NULL,                               \
      &name##_InitVars,                   \
      0,                              \
      allocType,                          \
      0 },

#define DEFINE_ACTOR_INTERNAL(name, _1, allocType) { 0, 0, NULL, NULL, NULL, &name##_InitVars, #name, allocType, 0 },

#define DEFINE_ACTOR_UNSET(_0) { 0 },

ActorOverlay gActorOverlayTable[] = {
#include "tables/actor_table.hpp"
};

#undef DEFINE_ACTOR
#undef DEFINE_ACTOR_INTERNAL
#undef DEFINE_ACTOR_UNSET

s32 gMaxActorId = 0;
}
