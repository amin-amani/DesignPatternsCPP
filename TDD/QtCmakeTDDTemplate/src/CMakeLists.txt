cmake_minimum_required(VERSION 3.5)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_definitions(-std=c++11)
add_definitions(-DAPI_EXPORTS)
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
set(ProjectName "example")

add_executable(${ProjectName} main.cpp )


target_link_libraries(${ProjectName}
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    )

