#define DLL_EXPORT
#include "hello.h"

#include <iostream>

namespace {

void hello_() { std::cout << "Hello." << std::endl; }

}  // namespace

extern "C" {

void hello() { hello_(); }

}  //