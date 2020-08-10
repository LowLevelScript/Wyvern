cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(Wyvern
        VERSION 0.1.0
        HOMEPAGE_URL "https://github.com/LowLevelScript/Wyvern"
        LANGUAGES C CXX
        )

set(CMAKE_OBJECT_PATH_MAX 512)

set(LLVM_INCLUDE_EXAMPLES OFF)
set(LLVM_INCLUDE_TESTS OFF)
set(LLVM_INCLUDE_BENCHMARKS OFF)

add_subdirectory(dependencies/llvmp/llvm)
add_subdirectory(dependencies/simdjson)
