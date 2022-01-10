cmake_minimum_required(VERSION 3.21)
project(LR_8)

set(CMAKE_CXX_STANDARD 17)

add_executable(LR_8 main.cpp
        task_1 task_1/task_1.cpp
        task_2 task_2/task_2.cpp
        task_3 task_3/task_3.cpp Tasks.h)
