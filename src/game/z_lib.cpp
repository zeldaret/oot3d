extern "C" {
#include "global.hpp"

void Lib_MemSet(u8* dest, size_t size, u8 val) {
    for (size_t i = 0; i < size; i++) {
        *dest++ = val;
    }

}

void Math_Vec3f_Copy(Vec3f* dest, Vec3f* src) {
    *dest = *src;
}

void Math_Vec3s_ToVec3f(Vec3f* dest, Vec3s* src) {
    dest->x = static_cast<float>(src->x);
    dest->y = static_cast<float>(src->y);
    dest->z = static_cast<float>(src->z);
}

void IChain_Apply_u8(Actor* actor, InitChainEntry* chain) {
    *(s8*)((char*)actor + chain->offset) = chain->value;
}

void IChain_Apply_s8(Actor* actor, InitChainEntry* chain) {
    *(u8*)((char*)actor + chain->offset) = (s16)chain->value;
}

void IChain_Apply_u16(Actor* actor, InitChainEntry* chain) {
    *(s16*)((char*)actor + chain->offset) = chain->value;
}

void IChain_Apply_s16(Actor* actor, InitChainEntry* chain) {
    *(u16*)((char*)actor + chain->offset) = chain->value;
}

void IChain_Apply_u32(Actor* actor, InitChainEntry* chain) {
    *(u32*)((char*)actor + chain->offset) = (s16)chain->value;
}

void IChain_Apply_s32(Actor* actor, InitChainEntry* chain) {
    *(s32*)((char*)actor + chain->offset) = (s16)chain->value;
}

void IChain_Apply_f32(Actor* actor, InitChainEntry* chain) {
    f32 value = (s16)chain->value;

    *(f32*)((char*)actor + chain->offset) = value;
}

void IChain_Apply_f32div1000(Actor* actor, InitChainEntry* chain) {
    f32 value = (s16)chain->value / 1000.0f;

    *(f32*)((char*)actor + chain->offset) = value;
}

void IChain_Apply_Vec3f(Actor* actor, InitChainEntry* chain) {
    Vec3f* vec = (Vec3f*)((char*)actor + chain->offset);
    f32 value = (s16)chain->value;

    vec->z = value;
    vec->y = value;
    vec->x = value;
}

void IChain_Apply_Vec3fdiv1000(Actor* actor, InitChainEntry* chain) {
    Vec3f* vec = (Vec3f*)((char*)actor + chain->offset);
    f32 value = (s16)chain->value / 1000.0f;

    vec->z = value;
    vec->y = value;
    vec->x = value;
}

void IChain_Apply_Vec3s(Actor* actor, InitChainEntry* chain) {
    Vec3s* vec = (Vec3s*)((char*)actor + chain->offset);
    s16 value = chain->value;

    vec->z = value;
    vec->y = value;
    vec->x = value;
}

void Color_RGBA8_Copy(Color_RGBA8* dest, Color_RGBA8* src) {
    dest->r = src->r;
    dest->g = src->g;
    dest->b = src->b;
    dest->a = src->a;
}

s16 Rand_S16Offset(s16 base, s16 range) {
    return (s16)(Rand_ZeroOne() * range) + base;
}

void Math_ApproachS(s16* pValue, s16 target, s16 scale, s16 step) {
    s16 value = *pValue;
    s16 diff = (s16)FUN_00368d94((s16)(target - value), scale);

    if (diff > step) {
        diff = step;
    }
    if (diff < -step) {
        diff = -step;
    }
    *pValue = value + diff;
}

s32 Math_StepToF(f32* pValue, f32 target, f32 step) {
    if (step != 0.0f) {
        if (target < *pValue) {
            step = -step;
        }
        step = (f32)SREG(30) * step / 3.0f;
        *pValue += step;
        if (((*pValue - target) * step) >= 0.0f) {
            *pValue = target;
            return true;
        }
    } else if (target == *pValue) {
        return true;
    }
    return false;
}

s32 Math_ScaledStepToS(s16* pValue, s16 target, s16 step) {
    if (step != 0) {
        f32 updateScale = (f32)SREG(30) * 0.5f;

        if ((s16)(*pValue - target) > 0) {
            step = -step;
        }
        *pValue += (s16)(step * updateScale);
        if (((s16)(*pValue - target) * step) >= 0) {
            *pValue = target;
            return true;
        }
    } else if (target == *pValue) {
        return true;
    }
    return false;
}



s32 Math_StepToS(s16* pValue, s16 target, s16 step) {
    if (step != 0) {
        if (target < *pValue) {
            step = -step;
        }
        f32 scaled = 0.0f;
        if (step > 0) {
            scaled = (f32)SREG(30) * step / 3.0f + 0.5f;
        } else {
            scaled = -(0.5f - (f32)SREG(30) * step / 3.0f);
        }
        step = (s16)scaled;
        *pValue = (s16)(*pValue + step);
        if (((*pValue - target) * step) >= 0) {
            *pValue = target;
            return true;
        }
    } else if (target == *pValue) {
        return true;
    }
    return false;
}

void Math_ApproachF(f32* pValue, f32 target, f32 fraction, f32 step) {
    if (*pValue != target) {
        f32 scaledStep = step * (f32)SREG(30) / 3.0f;
        f32 stepSize = (target - *pValue) * (fraction * (f32)SREG(30) / 3.0f);
        if (fabsf(target - *pValue) < 1.0e-5f) {
            stepSize = target - *pValue;
        }
        if (stepSize > scaledStep) {
            stepSize = scaledStep;
        } else if (stepSize < -scaledStep) {
            stepSize = -scaledStep;
        }
        *pValue += stepSize;
    }
}

void Math_ApproachZeroF(f32* pValue, f32 fraction, f32 step) {
    f32 scaledStep = step * (f32)SREG(30) / 3.0f;
    f32 fa = fraction * (f32)SREG(30) / 3.0f;
    f32 stepSize = *pValue * fa;
    if (fabsf(*pValue) < 1.0e-5f) {
        stepSize = *pValue;
    }
    if (stepSize > scaledStep) {
        stepSize = scaledStep;
    } else if (stepSize < -scaledStep) {
        stepSize = -scaledStep;
    }
    *pValue -= stepSize;
}

f32 FUN_00338f68(u16 angle);
f32 FUN_002cfca8(u16 angle);

f32 Math_CosS(s16 angle) {
    return FUN_00338f68((u16)angle);
}

f32 Math_SinS(s16 angle) {
    return FUN_002cfca8((u16)angle);
}

GLOBAL_ASM("asm/Math_SmoothStepToF.s")

GLOBAL_ASM("asm/Math_SmoothStepToS.s")

s32 Math_StepToAngleS(s16* pValue, s16 target, s16 step) {
    s32 diff = target - *pValue;

    if (diff < 0) {
        step = -step;
    }
    if (diff >= 0x8000) {
        step = -step;
        diff = -(0xFFFF - diff);
    } else if (diff <= -0x8000) {
        diff += 0xFFFF;
        step = -step;
    }

    if (step != 0) {
        f32 scaled = 0.0f;
        if (step > 0) {
            scaled = (f32)SREG(30) * step / 3.0f + 0.5f;
        } else {
            scaled = -(0.5f - (f32)SREG(30) * step / 3.0f);
        }
        s16 stepSize = (s16)scaled;
        *pValue += stepSize;
        if ((diff * stepSize) <= 0) {
            *pValue = target;
            return true;
        }
    } else if (target == *pValue) {
        return true;
    }
    return false;
}

GLOBAL_ASM("asm/Rand_S16Offset_003702c8.s")

}
