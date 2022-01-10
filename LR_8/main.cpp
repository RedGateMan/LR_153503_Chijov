#include <iostream>
#include "Tasks.h"

using namespace std;

int main() {
    int n;
    cout << "Enter Task Number: ";
    cin >> n;
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
        default:
            cout << "Incorrect task number!";
            break;
    }
    return 0;
}
