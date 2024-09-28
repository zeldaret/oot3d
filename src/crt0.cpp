#include <nn/svc/svc.h>

extern "C" void nninitRegion();
extern "C" void _fp_init();
extern "C" void nninitLocale();
extern "C" void nninitSystem();
extern "C" void nninitStartUp();
extern "C" __weak void __cpp_initialize__aeabi_();
extern "C" void nninitCallStaticInitializers();
extern "C" void nninitSetup();
extern "C" void nnMain();

// clang-format off
extern "C" __asm void __ctr_start()   
{
    bl __cpp(nninitRegion)
    bl __cpp(_fp_init)
    bl __cpp(nninitLocale)
    bl __cpp(nninitSystem)
    bl __cpp(nninitStartUp)
    bl __cpp(__cpp_initialize__aeabi_) // this is being nopped
    bl __cpp(nninitCallStaticInitializers)
    bl __cpp(nninitSetup)
    bl __cpp(nnMain)
    b __cpp(nn::svc::ExitProcess)
}
// clang-format on
