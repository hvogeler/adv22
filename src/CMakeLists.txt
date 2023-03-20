cmake_minimum_required(VERSION 3.24)
project(adv22 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(adv22
        adv22.cpp
        Adv22Runner.cpp Adv22Runner.h
        day01/Adv2201.cpp day01/Adv2201.h
        )

add_subdirectory(common ../build/common)
include_directories(common)

target_link_libraries(adv22 PRIVATE adv_common)
target_include_directories(adv22 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
