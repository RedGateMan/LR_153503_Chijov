#include <iostream>
#include "E:\LR's\LR_7\functions.h"

using namespace std;

int task_7() {
    long long n, a = 0;
    n = getInt(1,1e10);
    while (a < n) {
        a += 5;
    }
    if (a == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    a = 0;
    while (a < n) {
        a += 53;
    }
    if (a == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    a = 0;
    while (a < n) {
        a += 109;
    }
    if (a == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
