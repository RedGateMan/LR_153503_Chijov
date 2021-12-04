#include <iostream>
#include <cmath>
#include <gtest/gtest.h>
#include "E:\LR's\LR_5\functions.h"
#include "E:\LR's\LR_5\dll\library.h"

#define ll long long
#define ld long double

using namespace std;

int task_1() {
    testing::InitGoogleTest();
    unsigned ll n;
    cout << "Enter N: ";
    n = getInt(1, 2e10);
    ld *z = new ld[n];
    ld *x = new ld[n];
    ld *y = new ld[n];
    cout << "Enter X values" << endl;
    for (int i = 0; i < n; i++) {
        x[i] = getFloat(-2e31-1, 2e31-1);
    }
    cout << "Enter Y values" << endl;
    for (int i = 0; i < n; i++) {
        y[i] = getFloat(-2e31-1, 2e31-1);
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
