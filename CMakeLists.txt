cmake_minimum_required (VERSION 3.0)
project (Babylonian)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Release)

include_directories(include)
add_subdirectory(lib)

add_executable (sqrt src/main.cpp)
target_link_libraries(sqrt optimized babylonian cmath)