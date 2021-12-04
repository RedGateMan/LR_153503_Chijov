cmake_minimum_required(VERSION 3.17)

# title
project(dll)

set(CMAKE_CXX_STANDARD 17)

# Add;Refers to the lib directory under the project root directory
link_directories(lib)

add_executable(dll library.cpp)
add_library(library.h)

# Add;Refers to the dll file of the target link
target_link_libraries(LR_5 dll library.h)