cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

project(Wyvern
        VERSION 0.0.1
        HOMEPAGE_URL "https://github.com/LowLevelScript/Wyvern"
        LANGUAGES C CXX
        )

set(CMAKE_OBJECT_PATH_MAX 512)

add_subdirectory(dependencies)
add_subdirectory(src)
