cmake_minimum_required(VERSION 3.9)
project(SimpleWindow)

set(CMAKE_CXX_STANDARD 11)

find_package(Qt5Widgets)

add_executable(SimpleWindow main.cpp)

target_link_libraries(SimpleWindow Qt5::Widgets)