#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    float r;
    cout << "Введите радиус окружности: ";
    cin >> r;
    double l = r * M_PI;
    cout << "Длина окружности = " << floor(l*1000)/1000;
}

