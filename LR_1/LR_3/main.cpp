//Лабараторная работа 1, задача 3 Выполнил: Чижов Е.С.
/*Вычислить параемтры треугольника*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double X1, Y1, X2, Y2, X3, Y3, H1, H2, H3, M1, M2, M3, A, B, C, B1, B2, B3, deg1, deg2, deg3, rad1, rad2, rad3, R, r, S, s, sTriangle, sTriangle2, sTriangle3, p, pi = acos(-1), L, l;
    cout << "Enter coordinates:" <<  endl;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
    A = sqrt(pow(X1-X2,2)+pow(Y1-Y2,2));//Рассчет длин сторон
    B = sqrt(pow(X2-X3,2)+pow(Y2-Y3,2));
    C = sqrt(pow(X3-X1,2)+pow(Y3-Y1,2));
    cout << "Sides of triangle:" << endl;
    cout << "a = " << A << endl;
    cout << "b = " << B << endl;
    cout << "c = " << C << endl;
    p = (A + B + C)/2;
    sTriangle = sqrt(p*(p-A)*(p-B)*(p-C));
    H1 = 2/A*sTriangle;//Рассчет длин высот
    H2 = 2/B*sTriangle;
    H3 = 2/C*sTriangle;
    cout << "Heights of triangle:" << endl;
    cout << "h1 = " << H1 << endl;
    cout << "h2 = " << H2 << endl;
    cout << "h3 = " << H3 << endl;
    M1=sqrt(2*pow(A,2)+2*pow(B,2)-pow(C,2))/2;//Рассчет длин медиан
    M2=sqrt(2*pow(B,2)+2*pow(C,2)-pow(A,2))/2;
    M3=sqrt(2*pow(A,2)+2*pow(C,2)-pow(B,2))/2;
    cout << "Medians of triangle:" << endl;
    cout << "m1 = " << M1 << endl;
    cout << "m2 = " << M2 << endl;
    cout << "m3 = " << M3 << endl;
    B1=(sqrt(B*C*(B+C-A)*(A+B+C)))/(B+C);//Рассчет длин биссектрис
    B2=(sqrt(C*A*(C+A-B)*(A+B+C)))/(C+A);
    B3=(sqrt(A*B*(A+B-C)*(A+B+C)))/(A+B);
    cout << "Bisectors of triangle" << endl;
    cout << "b1 = " << B1 << endl;
    cout << "b2 = " << B2 << endl;
    cout << "b3 = " << B3 << endl;
    rad1=acos((pow(C,2)+pow(A,2)-pow(B,2))/(2*A*C));//Рассчет радианных мер углов
    rad2=acos((pow(B,2)+pow(C,2)-pow(A,2))/(2*B*C));
    rad3=acos((pow(A,2)+pow(B,2)-pow(C,2))/(2*A*B));
    cout << "Rads:" << endl;
    cout << "rad1 = " << rad1 << endl;
    cout << "rad2 = " << rad2 << endl;
    cout << "rad3 = " << rad3 << endl;
    cout << "Degrees:" << endl;
    deg1 = rad1 * 180/pi;//Рассчет грдусных мер углов
    deg2 = rad2 * 180/pi;
    deg3 = rad3 * 180/pi;
    cout << "deg1 = " << deg1 << endl;
    cout << "deg2 = " << deg2 << endl;
    cout << "deg3 = " << deg3 << endl;
    R = A*B*C/(4*sTriangle);//Рассчет радиуса описанной окружности
    r = sTriangle/p;//Рассчет радиуса вписанной окружности
    cout << "Outer circle radius: R = " << R << endl;
    cout << "Inner circle radius: r = " << r << endl;
    S = pi * pow(R, 2);//Рассчет площади описаной окружности
    s = pi * pow(r, 2);//Рассчет площади вписанной окружности
    cout << "Square of outer circle = " << S << endl;
    cout << "Square of inner circle = " << s << endl;
    L = pi * 2 * R;//Рассчет длины описаной окружности
    l = pi * 2 * r;//Рассчет длины вписанной окружности
    cout << "Length of outer circle = " << L << endl;
    cout << "Length of inner circle = " << l << endl;
    sTriangle2 = 0.5 * H1 * A;//Площадь треугольника вторым способом
    sTriangle3 = p * r;//Площадь треугольника третьим способом
    cout << "Triangle Perimeter: " << endl;
    cout << "P = " << p * 2 << endl;
    cout << "Triangle areas:" <<endl;
    cout << "S1 = " << sTriangle << endl;
    cout << "S2 = " << sTriangle2 << endl;
    cout << "S3 = " << sTriangle3 << endl;
    return 0;
}
