#include <iostream>
#include "E:\LR's\LR_5\functions.h"

using namespace std;

void search(ld **A, ll n) {
    ll counter = 0;
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < n; j++) {
            if (A[i][j] == 0) {
                counter++;
                cout << "i:" << i << " j:" << j << endl;
            }
        }
    }
    cout << "Amount of zeros in your array: " << counter << endl;
}

int task_3() {
    long long n;
    cout << "Enter N: ";
    n = getInt(1, 1e8);
    ld **A = new ld *[n];
    for (long long i = 0; i < n; i++) {
        A[i] = new ld[n];
    }
    cout << "Enter Array: ";
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < n; j++) {
            A[i][j] = getFloat(-1e8, 1e8);
        }
    }
    search(A, n);
    cout << "Reversed Array: " << endl;
    for (long long i = n; i > 0; i--) {
        for (long long j = n; j > 0; j--) {
            cout << A[i - 1][j - 1] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
        delete[] A[i];
    delete[] A;
    return 0;
}
