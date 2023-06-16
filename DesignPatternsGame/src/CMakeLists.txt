cmake_minimum_required(VERSION 2.8)

project(UI_Raspberry_GRPC LANGUAGES CXX)


set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_DEBUG "-O3")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -pthread")
set(CMAKE_CXX_FLAGS "-fPIC")
option(BUILD_SHARED_LIBS "Build using shared libraries" ON)
set(${PROJECT_NAME} "UI_Raspberry_GRPC")
set(PTHREAD_PATH /lib/x86_64-linux-gnu/libpthread.so.0)



set(PTHREAD_LIB ${PTHREAD_PATH})
set(${QT_LIBS} "/usr/lib/aarch64-linux-gnu")
set(${QT_Quick} "/usr/lib/aarch64-linux-gnu/libQt5Quick.so.5")
set(${QT_Quick_Control} "/usr/lib/aarch64-linux-gnu/libQt5QuickControls2.so.5")

link_directories(${QT_LIBS})

find_package(Qt5Core)
find_package(Qt5 COMPONENTS Widgets Core Gui Quick Qml Quick Test REQUIRED )

file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ui/*.ui)
file(GLOB QT_RESOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} resources/*.qrc)





QT5_ADD_RESOURCES(QT_RESOURCES_CPP ${QT_RESOURCES})
QT5_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})

find_package(Qt5 REQUIRED COMPONENTS Widgets Core Gui Quick Qml PrintSupport Test SerialBus SerialPort Network)


include_directories(
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Test_INCLUDE_DIRS}
    ${Qt5Gui_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    ${Qt5SerialBus_INCLUDE_DIRS}
    ${Qt5PrintSupport_INCLUDE_DIRS}

    )

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp *.qml *.qrc)


add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME}
    Qt5::Core
    Qt5::Widgets
    Qt5::Test
    Qt5::PrintSupport
    Qt5::SerialPort
    Qt5::Quick
    Qt5::Qml
    Qt5::Gui
    ${QT_Quick}
    ${QT_Quick_Control}
#    ${PTHREAD_LIB}
    )

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
