cmake_minimum_required(VERSION 2.8)

project(callgrind-test)

add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME} openblas)
