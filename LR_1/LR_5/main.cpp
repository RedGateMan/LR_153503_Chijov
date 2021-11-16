//Лабараторная работа 1, задача 5. Выполнил Чижов Е. С.

/*Определить расстояние, пройденное физическим телом за время t,
если тело движется с постоянным ускорением а и имеет в начальный момент
времени скорость V0.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double t, v0, a;
    cin >> t >> v0 >> a;
    cout << "Distance:" << v0 * t + (a * pow(t, 2)) / 2<< endl;
    cout << t;
    return 0;
}
