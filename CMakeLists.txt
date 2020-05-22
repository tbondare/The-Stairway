cmake_minimum_required(VERSION 3.15)
project(giant_on_stairs C)

set(CMAKE_C_STANDARD 99)

add_executable(giant_on_stairs main.c)

target_link_libraries(giant_on_stairs m)