cmake_minimum_required(VERSION 3.10)

# set the project name
project(Cpp_practice)

add_library(
    say_hello
    include/hello.hpp
    src/hello.cpp
)

add_library(
    functions
    include/functions.hpp
    src/functions.cpp
)

add_library(
    userdef
    include/userdefinedtypes.hpp
    src/userdefinedtypes.cpp
)


add_library(
    classes
    include/classes.hpp
    src/classes.cpp
)

# add the executable
add_executable(Cpp_practice src/main.cpp)

target_link_libraries(Cpp_practice PRIVATE say_hello functions userdef classes )