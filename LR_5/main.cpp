#include <iostream>
#include "Tasks.h"

int main() {
    std::cout << "Enter task number: ";
    long long n;
    std::cin >> n;
    // hello world
    switch (n) {
        case 1:
            task_1();//OK
            break;
        case 2:
            task_2();//OK
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
        default:
            std::cout << "Wrong task number!";
            break;
    }
    return 0;
}
