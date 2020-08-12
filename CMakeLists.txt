cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

project(Wyvern
        VERSION 0.0.1
        HOMEPAGE_URL "https://github.com/LowLevelScript/Wyvern"
        LANGUAGES C CXX
        )

set(CMAKE_OBJECT_PATH_MAX 512)

#set(LLVM_INCLUDE_EXAMPLES OFF)
#set(LLVM_BUILD_EXAMPLES OFF)
#set(LLVM_INCLUDE_BENCHMARKS OFF)
#set(LLVM_BUILD_BENCHMARKS OFF)
#set(LLVM_INCLUDE_TESTS OFF)
#set(LLVM_BUILD_TESTS OFF)
#set(LLVM_ENABLE_LIBXML2 OFF)
#set(LLVM_ENABLE_ZLIB OFF)
#set(LLVM_OPTIMIZED_TABLEGEN OFF)
#set(LLVM_TEMPORARILY_ALLOW_OLD_TOOLCHAIN ON)
#set(PACKAGE_VERSION "10.0.0")
#set(LLVM_BUILD_LLVM_C_DYLIB OFF)

add_subdirectory(dependencies/simdjson)
#add_subdirectory(dependencies/llvmp/llvm)

add_subdirectory(src)
