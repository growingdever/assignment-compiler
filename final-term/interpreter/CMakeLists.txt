cmake_minimum_required(VERSION 3.3)
project(interpreter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")

set(SOURCE_FILES y.tab.c y.tab.h lex.yy.c interp.c lib.c)
add_executable(interpreter ${SOURCE_FILES})