cmake_minimum_required(VERSION 3.20)
project(LR_5)

set(CMAKE_CXX_STANDARD 17)

#adding executable files
add_executable(main main.cpp
        task_1 Task_1/task_1.cpp
        task_2 Task_2/task_2.cpp
        task_3 Task_3/task_3.cpp
        task_4 Task_4/task_4.cpp
        task_5 Task_5/task_5.cpp
        task_6 Task_6/task_6.cpp
        functions.cpp
        functions.h
        dll dll/library.cpp
        dll dll/library.h
        Tasks.h ../LR_7/Tasks.h)

#incliding static libs