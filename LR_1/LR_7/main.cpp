//Лабораторная 1, задача 7. Выполнена: Чижов Е. С.

/* Разработка программы обмена местами двух целочисленных ячеек памяти без использования дополнительный памяти. Программа
должна запросить у пользователя два целый числа, затем выполнить реализованный алгоритм по шагам, показывая содержимое ячеек памяти до
первого шага и после каждого шага. Во время выполнения данного алгоритма могут возникать целочисленные переполнения ячеек; нужно уметь правильно
определить, где и почему они возникли.*/

#include <iostream>
using namespace std;
//Переполнение происходит потому что переменная типа long long вмещает в себя числа, не превышающие длиной 19 символов
//Прееполнение происходит в моменте перемножения двух переменных

int main() {
    long long int a, b;
    cout << "Enter the first variable" << endl;
    cin >> a;
    cout << "Enter the second variable" << endl;
    cin >> b;
    a = a ^ b;
    cout << "process: " << a << " " << b << endl;
    b = a ^ b;
    cout << "process: " << a << " " << b << endl;
    a = a ^ b;
    cout << "process: " << a << " " << b << endl;
    cout << "Result:" << endl;
    cout << a << endl << b << endl;
    return 0;
}