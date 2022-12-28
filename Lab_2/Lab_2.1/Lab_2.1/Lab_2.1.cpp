#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    float a, b, c;
    char d;
    

    cout << "Введите два числа\n";
    cin >> a >> b;
    cout << (a + b) / 2;
    cout << "\nВведите знак операции (+, -, *, /)\n";
    cin >> d;
   
    /*
    if (d == "*") {
        c = a * b;
    }
    if (d == "+") {
        c = a + b;
    }
    if (d == "-") {
        c = a - b;
    }
    if (d == "/") {
        c = a / b;
    }
    cout << c;
    */

    switch (d) {

    case '*':
        cout << a * b;
        break;
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '/':
        cout << a / b;
         break;
    }
}

