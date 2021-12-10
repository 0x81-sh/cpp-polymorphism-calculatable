cmake_minimum_required(VERSION 3.21)
project(calculatable)

set(CMAKE_CXX_STANDARD 23)
add_compile_options(-Wall)

add_executable(calculatable main.cpp ICalculatable.h Add.cpp Add.h Subtract.cpp Subtract.h Multiply.cpp Multiply.h Divide.cpp Divide.h Power.cpp Power.h)
