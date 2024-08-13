#include "pch.h"
#include <iostream>

void CSharedLib_work2(char* str)
{
  std::cout << "work2: " << str << std::endl;
}

void CSharedLib_work(char** list, unsigned int length)
{
  for (size_t i = 0; i < length; i++)
  {
    // conversation and calling the original class
  }
}
