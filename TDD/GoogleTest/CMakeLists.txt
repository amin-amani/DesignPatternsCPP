cmake_minimum_required(VERSION 3.5)

project(CPPProjectTemplate LANGUAGES CXX)
set_property(GLOBAL PROPERTY CmakeParentDirectory "${CMAKE_CURRENT_LIST_DIR}")

set(SRC_DIRECTORY ${PROJECT_SOURCE_DIR})


include_directories(src)

add_subdirectory(src)
add_subdirectory(lib/googletest)
add_subdirectory(tst)
