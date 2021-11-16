//Лабараторная работа 1, задача 6. Выполнил Чижов Е. С.

/*Студент начал решать задачи данного урока программирования,
когда электронные часы показывали h1 часов и min1 минут, а закончил, когда
было h2 часов и min2 минут. Составьте программу, позволяющую определить,
сколько времени студент решал эти задачи. (Будем считать, что задачи
решались не дольше суток).*/

#include <iostream>
using namespace std;

int main() {
    int h1, h2, m1, m2, H, M;
    cout << "Start time: " << endl;
    cin >> h1 >> m1;
    cout << "Finnish time: " << endl;
    cin >> h2 >> m2;
    if (h1 > h2) {//проверка на то, больше ли начальный час конечного
        if (m1 > m2){
            H = 23 - abs(h1 - h2);
            M = 60 - abs(m1 - m2);
        }
        else {
            H = 24 - abs(h1 - h2);
            M = m2 - m1;
        }
    }
    else{
        if (m2 >= m1){
            H = h2 - h1;
            M = m2 - m1;
        }
        else{
            H = h2 - h1 - 1;
            M = 60 - abs(m2 - m1);
        }
    }
    cout << "Spent hours: " << abs(H) << endl;
    cout << "Spent minutes: " << abs(M) << endl;
    return 0;
}