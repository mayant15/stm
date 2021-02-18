cmake_minimum_required (VERSION 3.13)
project(stm)
set(CMAKE_CXX_STANDARD 14)

set(STM_SOURCES
    src/stm.cpp
)

add_library(stm ${STM_SOURCES})
target_include_directories(stm PUBLIC include)

add_subdirectory(tests)
