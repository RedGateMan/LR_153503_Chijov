#include <iostream>
#include <cmath>
#include "E:\LR's\LR_5\functions.h"

using namespace std;

long long k;

long long function(long long a, long long b) {
    long long sum = 0;
    if (a == 0 && b == 0) {
        return 1;
    } else if (a > 0 && (b >= 0 && (a * (b * (k - 1)) + 1))) {
        for (long long i = 0; i < k - 1; i++)
            sum += function(a - 1, b - i);
        return sum;
    } else {
        return 0;
    }
}

int task_5() {
    long long counter = 1;
    long long n, t, sum = 0;
    while (true) {
        k = getInt(0, 1e19);
        n = getInt(0, 1e19);
        t = getInt(0, 10);
        if (k == 0 && n == 0 && t == 0) {
            break;
        }
        for (long long i = 0; i < n * (k - 1); i++) {
            sum += function(n, i);
        }
        long long m = pow((long long) 10, t);
        cout << "Case #" << counter << ": " << sum % m << endl;
        counter++;
    }
    return 0;
}
