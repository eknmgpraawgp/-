// Lab_3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int* pointer;
    int any = 38;
    pointer = &any;
    cout << "pointer= " << pointer<<"\n";
    cout << "*pointer= " << *pointer<<"\n";
    //Задания 4-5
    *pointer = 10;
    cout << any<<"\n";
    //Задания 6-7
    int arr[3]{ 7, 3, 0 };
    for (int* pntr = arr; pntr <= &arr[2]; pntr++)
    { 
        cout << *pntr << "\n";
    }
    //Задания 8-10
    int smt=5;
    int* const pntr = &smt;
    cout << pntr << "=" << *pntr << "\n";
    *pntr = 25;
    cout << pntr << "=" << *pntr << "\n";
    //pntr=&x ошибка// 

}