#pragma once

#ifndef DECLSPEC
#ifdef DLL_EXPORT
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern DECLSPEC void hello();

#ifdef __cplusplus
}
#endif