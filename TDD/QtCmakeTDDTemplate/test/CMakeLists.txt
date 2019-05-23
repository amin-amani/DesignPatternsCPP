cmake_minimum_required(VERSION 2.8)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
set(CMAKE_CXX_FLAGS "-fPIC")
find_package(Qt5Core)
find_package(Qt5Network)
find_package(Qt5 REQUIRED COMPONENTS Widgets Core Gui Quick Qml PrintSupport Test SerialPort)


set(PTHREAD_LIB "/usr/lib/x86_64-linux-gnu/libpthread.so")


include_directories(
${Qt5Core_INCLUDE_DIRS}
${Qt5Test_INCLUDE_DIRS}
${Qt5Gui_INCLUDE_DIRS}
${Qt5Widgets_INCLUDE_DIRS}
${Qt5Network_INCLUDE_DIRS}
)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true ${SRC_DIRECTORY}/src/*.h  ${SRC_DIRECTORY}/src/*.cpp  )
set(SOURCES
    ${SOURCES}
    ${TRT_SRC}
    ${SRC_DIRECTORY}
    )
list(REMOVE_ITEM SOURCES ${SRC_DIRECTORY}/src/main.cpp)
set(
    USED_LIB
    ${PTHREAD_LIB}
    Qt5::Test
    Qt5::Gui
    Qt5::SerialPort
    Qt5::Network
    ${PTHREAD_LIB}

    )


enable_testing()
add_executable(Template_test tst_Template.cpp)
target_link_libraries(Template_test ${USED_LIB} )
add_test(NAME Template_test COMMAND Template_test)
