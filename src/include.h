#pragma once

#ifdef WIN
#ifdef DLL
#define EXPORT_SYMBLE __declspec(dllexport)
#else
#define EXPORT_SYMBLE __declspec(dllimport)
#endif
#else
#define EXPORT_SYMBLE
#endif


#ifdef __cplusplus
extern "C" {
#endif

EXPORT_SYMBLE void func();

#ifdef __cplusplus
}
#endif