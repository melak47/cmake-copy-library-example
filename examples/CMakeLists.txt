add_executable(demo demo.cpp)
target_link_libraries(demo PRIVATE hello)

add_custom_command(
    TARGET demo POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:hello> $<TARGET_FILE_DIR:demo>
    COMMENT "Copy library"
)
