cmake_minimum_required(VERSION 3.30)
project(c_intro C)

set(CMAKE_C_STANDARD 11)

add_executable(c_intro main.c intro/count.c)
