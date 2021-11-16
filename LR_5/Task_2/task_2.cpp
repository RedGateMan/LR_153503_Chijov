#include <iostream>
#include "E:\LR's\LR_5\functions.h"

using namespace std;
//3     input
//1 2 3
//1 3   output
ld maxRec(ld *array, ll n, ll current, ld max) {
    if (max <= array[current]) {
        max = array[current];
        if (current >= n - 1) {
            return max;
        }
        return maxRec(array, n, current + 1, max);
    }
    return 0;
}

int task_2() {
    long long n;
    cout << "Enter N: ";
    n = getInt(1, 1e30);
    ld *a = new ld[n];
    cout << "Enter Array: ";
    for (int i = 0; i < n; i++) {
        a[i] = getFloat(-1234567, 23456789);
    }
    cout << "IF 0 then only 1 element:" << endl;
    cout << maxRec(a, n / 3, 0, -1e30) << endl;
    cout << maxRec(a, n, n - n / 3, -1e30);
    return 0;
}
