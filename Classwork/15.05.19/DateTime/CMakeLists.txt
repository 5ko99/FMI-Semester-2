cmake_minimum_required(VERSION 3.14)
project(DateTime)

set(CMAKE_CXX_STANDARD 17)

add_executable(DateTime main.cpp Date.cpp Date.h Time.cpp Time.h DateTime.cpp DateTime.h)