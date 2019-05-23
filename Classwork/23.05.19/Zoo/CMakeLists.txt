cmake_minimum_required(VERSION 3.14)
project(Zoo)

set(CMAKE_CXX_STANDARD 11)

add_executable(Zoo main.cpp Animal.cpp Animal.h Dog.cpp Dog.h)