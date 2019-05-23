cmake_minimum_required(VERSION 3.5)
project(gtestStructure LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
SET(CMAKE_CXX_FLAGS "-fPIC")
find_package(Qt5Core)
configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/config.h.in"  "${CMAKE_CURRENT_SOURCE_DIR}/config.h" )

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

get_property(cmake_parent_directory GLOBAL PROPERTY CmakeParentDirectory)
include_directories(${cmake_parent_directory}/lib/QsLog)
set (QSLOG_LIB ${CMAKE_BINARY_DIR}/lib/QsLog/lib/libQsLog.so)
include_directories(
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Test_INCLUDE_DIRS}
    ${Qt5Gui_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    )
set(SOURCES ${SOURCES} )
add_executable(${CMAKE_PROJECT_NAME} main.cpp ${SOURCES}  ${QT_SOURCES} ${QSLOG_INC})
target_link_libraries(${CMAKE_PROJECT_NAME}  Qt5::Core  ${QSLOG_LIB} )
add_library(${CMAKE_PROJECT_NAME}_lib STATIC ${SOURCES}  ${QT_SOURCES} ${QSLOG_INC})

