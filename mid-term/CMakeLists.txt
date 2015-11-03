cmake_minimum_required(VERSION 3.3)
project(compiler_mid_term)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")

set(SOURCE_FILES y.tab.c y.tab.h lex.yy.c syntax.c print_ast.c main.c type.h print_ast.h syntax.h my_printer.c my_printer.h)
add_executable(compiler_mid_term ${SOURCE_FILES})