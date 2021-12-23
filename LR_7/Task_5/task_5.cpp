#include <iostream>
#include "E:\LR's\LR_7\functions.h"

using namespace std;

int task_5() {
    long long arab;
    arab = getInt(1, 1e10);
    long long counter = 0;
    while (arab / 1000) {
        cout << 'M';
        arab -= 1000;
    }
    while (arab / 500) {
        cout << 'D';
        arab -= 500;
    }
    while (arab / 100) {
        cout << 'C';
        arab -= 100;
    }
    while (arab / 50) {
        cout << 'L';
        arab -= 50;
    }
    while(arab / 10){
        cout << 'X';
        arab -=10;
    }
    while(arab / 5){
        cout << 'V';
        arab -= 5;
    }
    while(arab --){
        cout << 'I';
    }
    return 0;
}
