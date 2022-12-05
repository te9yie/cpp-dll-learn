cmake_minimum_required(VERSION 3.14)
project(call-dll-func)

add_library(hello SHARED dll-src/hello.cpp)
target_include_directories(hello PUBLIC dll-src)

add_executable(call-hello src/main.cpp)
target_link_libraries(call-hello PRIVATE hello)