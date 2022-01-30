cmake_minimum_required(VERSION 3.18)

set(PRJ_NAME CPPClass)
project(${PRJ_NAME})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} -O0") #  -Wall -Wextra -Wunused

file(GLOB SRC_FILES *.cpp *.hpp)

set(EXE_NAME cppclass)
add_executable(${EXE_NAME} ${SRC_FILES})
