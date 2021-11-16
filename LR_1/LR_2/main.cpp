//Лабораторная 1, задача 2. Выполнена: Чижов Е.С.

/*Разработка программы для реализации линейного
вычислительного процесса*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double A, x, B, d, C, K;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter d: ";
    cin >> d;
    cout << "Enter K: ";
    cin >> K;
    cout << "Enter C: ";
    cin >> C;
    A = log10(x);
    B = x + exp(d);
    long double Y = (A + B) - pow(C, 2) / K;//Рассчет заданного уравнения
    cout << "The answer is:" << Y << endl;
    return 0;
}
