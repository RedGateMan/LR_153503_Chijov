#include "library.h"
#include <iostream>
#include <iomanip>

long double fabs(long double x) {
    if (x < 0)
        return -x;
    return x;
}

long long getInt(long long l, long long r) {
    long double xLF;
    while ((scanf("%llf", &xLF)) == 0 || xLF < l || fabs(xLF - (long long) (xLF)) >= 1e-9 || xLF > r) {
        std::cerr << "Invalid input!\n" << "Enter integer digit!\n";
        while (fgetc(stdin) != '\n');
    }
    return (long long) xLF;
}

long double getFloat(long double l, long double r) {
    long double x;
    while ((scanf("%llf", &x)) == 0 || (x > r && fabs(r - x) >= 1e-9) || (x < l && fabs(x - l) >= 1e-9)) {
        std::cerr << "Invalid input!\n" << "Enter real digit!\n";
        while (fgetc(stdin) != '\n');
    }
    return x;
}

long double myPow(long double a, long long b) {
    long double asave = a;
    if (b == 0) {
        return 1;
    } else if (b == 1) {
        return a;
    } else
        for (int i = 1; i < b; i++) {
            a *= asave;
        }
    return a;
}

unsigned long long myFact(long long x) {///Максимально вводимое число, которое влезает в ячейку память -- 20!
    unsigned long long result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}
