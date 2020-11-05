cmake_minimum_required(VERSION 3.5)

project(gtestStructure LANGUAGES CXX)
include_directories(src)
add_subdirectory(src)
add_subdirectory(lib/googletest)
add_subdirectory(tst)
