cmake_minimum_required(VERSION 3.17)
project(minigrep)

set(CMAKE_CXX_STANDARD 20)

include(setup_googletest.cmake)

add_compile_options(-O3 -Wall -Wextra)

add_library(lib STATIC lib/config.cpp lib/str_processing.cpp)
target_include_directories(lib PUBLIC ./lib)

add_executable(minigrep src/main.cpp)
target_link_libraries(minigrep lib gtest_main)

add_executable(test test/str_processing_test.cpp)
target_link_libraries(test lib gtest_main gmock_main)