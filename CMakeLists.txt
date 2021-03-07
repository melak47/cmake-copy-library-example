cmake_minimum_required(VERSION 3.15)

project(hello)

include(GenerateExportHeader)

add_library(hello SHARED hello/src/hello.cpp)
generate_export_header(hello)

target_include_directories(hello
    PUBLIC
        hello/include
        ${CMAKE_CURRENT_BINARY_DIR} # generated export header is here
    PRIVATE
        hello/private
)

add_subdirectory(examples)
