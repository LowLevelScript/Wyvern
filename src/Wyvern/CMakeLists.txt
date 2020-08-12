find_package(llvm 10.0.0 REQUIRED)

set(WYVERN_SOURCES
        Wyvern.cpp
        )

add_library(Wyvern SHARED ${WYVERN_SOURCES})
target_compile_features(Wyvern PUBLIC cxx_std_17)
target_include_directories(Wyvern PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/dependencies/simdjson/include>
        $<INSTALL_INTERFACE:include>
        )

target_link_libraries(Wyvern PUBLIC
        llvm
        simdjson
        )