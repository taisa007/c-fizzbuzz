cmake_minimum_required(VERSION 3.3)
project(c_fizzbuzz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c main.h)
add_executable(c_fizzbuzz ${SOURCE_FILES})