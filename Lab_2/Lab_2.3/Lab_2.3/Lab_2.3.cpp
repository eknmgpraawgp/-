#include <iostream>
using namespace std;

int summ(int num=1) {
    int sum = 0;
    if (num > 0) {
        for (int i = 1; i <= num; i++) {
            sum += i;
        }
    };
    cout << sum;
    return sum;
}

int func2(int x, int y, int &z, int &q) {
    z = x + y;
    q = x * y;
    cout <<"\nСумма первых двух аргументов: "<< z <<"\nРезультат их умножения: " << q;
    return z;
};

int main()
{
    setlocale(LC_ALL, "Rus");
    int matrix[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = i + j + 2;
        }
    }

    //Вывод матрицы
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    int sum = 0;

    //Подсчет суммы
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            sum += matrix[i][j];
    }
    cout << sum<<"\n";

    //Массив
    int array[3]{ 0, 0, 0 };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            array[j]+= matrix[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
       
        cout << array[i]<<" ";
    }

    float a = 20.84;
    float &b = a;
    float &c = a;
    a = 20.84 + 2.0;
    int d;
    cout <<"\n"<< b << ", " << c <<"\n";
    cout << "Введите число:\n";
    cin >> d;
    summ(d);

    //задания 12-14
    int z = 1;
    int q = 2;
    func2(2, 3, z, q);

    //задания 15-18
    cout << "\n";
    int any = 20;
    cout <<"\nЗначение переменной: " << any;

    for (int i= 1;i < 3;i++) {
        int smt = 23;
        cout << ", " << smt;
        cout << ", "<< any;
        
}
    //cout << smt;
}
