cmake_minimum_required(VERSION 3.14)
project(cpp_data_structure)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_data_structure main.cpp)
add_executable(vector STL/vector.cpp)
add_executable(hash STL/hash.cpp)

add_executable(1 1.cpp)
add_executable(2 2.cpp)