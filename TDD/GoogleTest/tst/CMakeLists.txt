
set(BINARY ${CMAKE_PROJECT_NAME}_tst)
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)
file(GLOB_RECURSE SRC_SOURCES LIST_DIRECTORIES false ${PROJECT_SOURCE_DIR}/src/*.h ${PROJECT_SOURCE_DIR}/src/*.cpp)
set(SOURCES
    ${SRC_SOURCES}
    ${TEST_SOURCES}
    )
list(REMOVE_ITEM SOURCES ${PROJECT_SOURCE_DIR}/src/main.cpp)
add_executable(${BINARY} ${SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})
message("=====================" ${SOURCES})
target_link_libraries(${BINARY} PUBLIC  gtest
    )
