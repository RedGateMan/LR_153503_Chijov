cmake_minimum_required(VERSION 3.21)
project(LR_6)

set(CMAKE_CXX_STANDARD 20)

add_executable(LR_6 main.cpp
        task_1 Task_1/task_1.cpp
        task_2 Task_2/task_2.cpp
        task_3 Task_3/task_3.cpp
        task_4 Task_4/task_4.cpp
        task_5 Task_5/task_5.cpp
        task_6 Task_6/task_6.cpp
        task_7 Task_7/task_7.cpp
        task_8 Task_8/task_8.cpp
        task_9 Task_9/task_9.cpp
        task_10 Task_10/task_10.cpp
        functions.cpp
        functions.h
        Tasks.h Tasks.h)
 add_subdirectory(Task_1)
 add_subdirectory(Task_2)
 add_subdirectory(Task_3)
 add_subdirectory(Task_4)
 add_subdirectory(Task_5)
 add_subdirectory(Task_6)
 add_subdirectory(Task_7)
 add_subdirectory(Task_8)
 add_subdirectory(Task_9)
 add_subdirectory(Task_10)