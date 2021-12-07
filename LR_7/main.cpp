#include <iostream>
#include "Tasks.h"
#include "E:\LR's\LR_7\functions.h"

int main() {
    std::cout << "Enter task number: ";
    long long n;
    std::cin >> n;
    switch (n) {
        case 1:
            task_1();
            break;
        case 2:
            task_2();
            break;
        case 3:
            task_3();
            break;
        case 4:
            task_4();
            break;
        case 5:
            task_5();
            break;
        case 6:
            task_6();
            break;
        case 7:
            task_7();
            break;
        case 8:
            task_8();
            break;
        case 9:
            task_9();
            break;
        case 10:
            task_10();
            break;
        default:
            std::cout << "Wrong task number!";
            break;
    }
    return 0;
}
