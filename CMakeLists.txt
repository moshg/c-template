cmake_minimum_required (VERSION 3.8)
set (CMAKE_C_STANDARD 99)
set (CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

project (helloworld C)
add_executable(helloworld "src/helloworld.c" "src/greet/greet.c")
