cmake_minimum_required(VERSION 3.10)

project(tema2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(inc)

add_executable(main src/main.cpp src/Book.cpp src/User.cpp src/Library.cpp)