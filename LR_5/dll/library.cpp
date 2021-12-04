#include "library.h"

#include <iostream>
#include <cmath>

long double mFunction(long long k) {
    if (sin(k) <= 0.2) {
        return k;
    } else if (sin(k) >= 0.2 && sin(k) <= 0.9) {
        return sqrt(k);
    } else if (sin(k) >= 0.9) {
        return sqrt(sqrt(k));
    }
    return 0;
}
