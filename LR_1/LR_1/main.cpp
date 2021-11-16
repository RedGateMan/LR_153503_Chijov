//Лабораторная 1, задача 1. Выполнена: Чижов Е.С.

/*Вычислить уравнение
Дано число x. Не пользуясь никакими другими арифметическими действиями,
кроме сложения, вычитания и умножения, вычислите 23х^3 + 69x^2 + 32x + 8 и
-23х^3 + 69x^2 - 32x + 8. Разрешается использовать суммарно не более 8
арифметических операций на всю программу. x - вещественное.
*/

#include <iostream>
using namespace std;
int main() {
    double x;
    cin >> x;
    double poweredX = x * x; //Assigning additional variable to avoid additional arithmetical operations
    double poly1 = (23 * poweredX + 32) * x; //Assigning additional variable to avoid additional arithmetical operations
    double poly2 = 69 * poweredX + 8; //Assigning additional variable to avoid additional arithmetical operations
    cout << "First solution: " <<poly1 + poly2 << endl; //Outputting first solution
    cout << "Second solution: "<<poly2 - poly1 << endl; //Outputting second solution
    return 0;
}