project(myfirstlib)
cmake_minimum_required(VERSION 3.5)

include_directories("include")

add_subdirectory(lib)
add_subdirectory(tool)
