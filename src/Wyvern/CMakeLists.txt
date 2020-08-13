# Copyright 2020 Matt Jones and Contributors.
# Recipe based on https://github.com/novelrt/NovelRT

find_package(llvm 10.0.0 REQUIRED)

set(WYVERN_SOURCES
        FS/SourceFile.cpp
        Lexer/Lexer.cpp
        )

add_library(Wyvern SHARED ${WYVERN_SOURCES})
target_compile_features(Wyvern PUBLIC cxx_std_17)
target_include_directories(Wyvern PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/dependencies/simdjson/include>
#        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/dependencies/llvmp/llvm/include>
        ${LLVM_INCLUDE_DIRS}
        $<INSTALL_INTERFACE:include>
        )

add_definitions(${LLVM_DEFINITIONS})

llvm_map_components_to_libnames(llvm_libs support core irreader)

if(MSVC)
    target_link_libraries(Wyvern PRIVATE "-ignore:4199")
endif()

target_link_libraries(Wyvern PUBLIC
        simdjson
        ${llvm_libs}
        )
