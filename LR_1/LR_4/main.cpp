//Лабараторная работа 1, задача 4. Выполнил Чижов Е. С.

/*Определить время падения камня на поверхность земли с высоты h.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double h, g = 9.81;
    cin >> h;
    cout << "Time: "<<sqrt(2 * h /g);
    return 0;
}
