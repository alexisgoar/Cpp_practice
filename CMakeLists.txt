cmake_minimum_required(VERSION 3.10)

# set the project name
project(Cpp_practice)

add_library(
    say_hello
    include/hello.hpp
    src/hello.cpp
)

# add the executable
add_executable(Cpp_practice src/main.cpp)

target_link_libraries(Cpp_practice PRIVATE say_hello)