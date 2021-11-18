#include <iostream>
#include "E:\LR's\LR_5\functions.h"

using namespace std;

long long g(long long n) {
    long long k = (n + 1) / 2;
    if (n == 0) return 0;
    return k * k + g(n / 2);
}

int task_6() {
    long long n;
    while (true) {
        n = getInt(1, 1e10);
        cout << g(n) << endl;
    }
    return 0;
}
