cmake_minimum_required(VERSION 3.10)

# set the project name
project(Nonogram C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(googletest)
add_subdirectory(tests)

set(Sources 
    src/main.cpp
)

# add_executable(Nonogram ${Sources})
add_library(Nonogram STATIC ${Sources})
