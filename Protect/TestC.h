#ifdef DLL_PROTECT
#define DLL_PROTECT_API extern "C" __declspec(dllexport)
#else
#define DLL_PROTECT_API extern "C" __declspec(dllimport)
#endif

DLL_PROTECT_API void TestC();