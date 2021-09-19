cmake_minimum_required(VERSION 3.17)
project(screw_engine)

set(CMAKE_CXX_STANDARD 20)

include_directories(/usr/local/include/)

add_subdirectory(lib_screw_engine)
add_subdirectory(demo)