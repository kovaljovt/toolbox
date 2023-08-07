cmake_minimum_required(VERSION 3.26)
project(toolbox)

set(CMAKE_CXX_STANDARD 17)

add_executable(toolbox main.cpp)
add_executable(algs-sorting Algorithms/Sorting/SortingAlgs.h Algorithms/Sorting/SortingAlgs.cpp)