cmake_minimum_required(VERSION 3.10)

set(This tests-suite)
set(Sources 
    BoardTests.cpp
    SolverTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    Nonogram
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
