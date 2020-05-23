# cmake_minimum_required(VERSION <specify CMake version here>)
project(3 C)

set(CMAKE_C_STANDARD 99)

add_executable(3 main.c menu.c menu.h tipos.h file.c file.h)