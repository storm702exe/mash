cmake_minimum_required(VERSION 3.10)

project(mash)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(mash main.cpp)
add_subdirectory(Shell)
target_include_directories(mash PUBLIC builtins/cd excuter parser lexer Shell)
target_link_libraries(mash
    PUBLIC shell
)
