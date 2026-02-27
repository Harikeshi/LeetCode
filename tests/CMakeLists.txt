cmake_minimum_required(VERSION 3.14)
project(LeetCode_Test)

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PUBLIC pthread gtest gtest_main LeetCode)