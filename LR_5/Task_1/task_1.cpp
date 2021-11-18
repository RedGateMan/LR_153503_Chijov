#include <iostream>
#include <cmath>
#include "E:\LR's\LR_5\functions.h"
#include <gtest/gtest.h>

#define ll long long
#define ld long double

using namespace std;

ld mFunction(ll k) {
    if (sin(k) <= 0.2) {
        return k;
    } else if (sin(k) >= 0.2 && sin(k) <= 0.9) {
        return sqrt(k);
    } else if (sin(k) >= 0.9) {
        return sqrt(sqrt(k));
    }
    return 0;
}

int task_1() {
    ll n;
    cout << "Enter N: ";
    n = getInt(1, 10000000000000);
    ld *z = new ld[n];
    ld *x = new ld[n];
    ld *y = new ld[n];
    cout << "Enter X values" << endl;
    for (int i = 0; i < n; i++) {
        x[i] = getFloat(-23456789, 23456789);
    }
    cout << "Enter Y values" << endl;
    for (int i = 0; i < n; i++) {
        y[i] = getFloat(-23456789, 234567890);
    }
    for (int i = 0; i < n; i++) {
        z[i] = x[i] + mFunction(i) * y[i];
    }
    cout << "X: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << ' ';
    }
    cout << endl;
    cout << "Y: ";
    for (int i = 0; i < n; i++) {
        cout << y[i] << ' ';
    }
    cout << endl;
    cout << "Z: ";
    for (int i = 0; i < n; i++) {
        cout << z[i] << ' ';
    }
    cout << endl;
    delete[] z;
    delete[] x;
    delete[] y;
    return 0;
}
