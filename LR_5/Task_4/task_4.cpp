#include <iostream>
#include "E:\LR's\LR_5\functions.h"

using namespace std;

long long function(long long n) {
    if (n % 10 > 0) {
        return n % 10;
    } else if (n == 0) {
        return 0;
    } else {
        return function(n / 10);
    }
}


int task_4() {
    long long p, q;
    long double sum = 0;
    while (true) {
        sum = 0;
        p = getInt(-1e9, 1e9);
        q = getInt(-1e9, 1e9);
        if (p < 0 && q < 0) {
            break;
        }
        for (long long i = p; i <= q; i++) {
            sum += function(i);
        }
        cout << sum << endl;
    }
    return 0;
}
