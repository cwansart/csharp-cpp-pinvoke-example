#pragma once

#ifdef __cplusplus
extern "C" {
#endif
  extern __declspec(dllexport) void CSharedLib_work(const char** list, unsigned int length);
  extern __declspec(dllexport) void CSharedLib_work2(const char* str);
#ifdef __cplusplus
}
#endif