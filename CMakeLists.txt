cmake_minimum_required(VERSION 3.14)
project(LeetCode)

file(GLOB_RECURSE INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp")
file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(${PROJECT_NAME} ${INCLUDES} ${SOURCES})

target_include_directories(${PROJECT_NAME}
        PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
add_subdirectory(tests)