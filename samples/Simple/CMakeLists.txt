set(SIMPLE_SOURCES
        main.cpp
        )

add_executable(Simple ${SIMPLE_SOURCES})
target_link_libraries(Simple
        PRIVATE
        Wyvern
        )

add_custom_command(
        TARGET Simple POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        $<TARGET_FILE_DIR:Wyvern>
        $<TARGET_FILE_DIR:Simple>
    )
