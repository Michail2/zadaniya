cmake_minimum_required(VERSION 3.5)

project(untitled1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt5 COMPONENTS Sql REQUIRED)

add_executable(untitled1 main.cpp qwe.h qwe.cpp)
target_link_libraries(untitled1 Qt5::Sql)

