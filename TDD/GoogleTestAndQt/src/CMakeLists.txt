#cmake_minimum_required(VERSION 3.5)

#project(gtestStructure LANGUAGES CXX)

#set(CMAKE_INCLUDE_CURRENT_DIR ON)

#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(Qt5Core)
#set( QT_SOURCES
#    Add.cpp
#    Add.h
##    Classifiers/
#)
#add_executable(gtestStructure  main.cpp  ${QT_SOURCES})
#target_link_libraries(gtestStructure Qt5::Core)
#message("amin ------------------->" ${BINARY})
#add_library(${BINARY}_lib STATIC ${SOURCES})

cmake_minimum_required(VERSION 3.5)
project(gtestStructure LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(BINARY ${CMAKE_PROJECT_NAME})
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
SET(CMAKE_CXX_FLAGS "-fPIC")
find_package(Qt5Core)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
#set( QT_SOURCES
#    main.cpp
#    Add.cpp
#    Add.h
##    Classifiers/
#)
include_directories(
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Test_INCLUDE_DIRS}
    ${Qt5Gui_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    )
set(SOURCES ${SOURCES})
#message("-------------_>" ${SOURCES})
#target_compile_options(gtestStructure PRIVATE -fPIC)
add_executable(gtestStructure main.cpp ${SOURCES}  ${QT_SOURCES})
target_link_libraries(gtestStructure  Qt5::Core)
add_library(${BINARY}_lib STATIC ${SOURCES}  ${QT_SOURCES})

