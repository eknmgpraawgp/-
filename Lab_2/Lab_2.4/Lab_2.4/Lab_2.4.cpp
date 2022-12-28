#include <iostream>
#include "Lab_2.4.h";
using namespace std;

int func(int x) {
    static int y = 0;
    cout << x + y<<"\n";
    y = x;
    return x;
}

#define SUM(a, b) a = a + b;

int main()
{
    setlocale(LC_ALL, "Russian");
    func(3);
    func(6);
    func(4);
    int a = 5;
    int b = 4;
    SUM(a, b);
    cout <<"Результат работы макроса: " << a<<"\n";
    int z;
    cin >> z;
}

