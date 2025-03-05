cmake_minimum_required(VERSION 3.30)
project(00_Introduction)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # Disable compiler extensions

# Enable warnings for non-standard behavior
add_compile_options(-Wall -Wextra -pedantic)  # Enable strict standard compliance warnings

add_executable(00_Introduction main.cpp
        HelloWorld.cpp
        HelloWorld.h
)
