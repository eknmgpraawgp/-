#include <iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");

    int a = 150;
    float b = 15.933;
    short c = 250;

    std::cout << "a = " << a << endl;
    std::cout << "b = " << b << endl;
    std::cout << "c = " << c << endl;

    string day =  "31";
    string month = "января";
    string year = "2004 года";
   
    std::cout << "Моя дата рождения: " << day <<" "<< month<<" "<< year << endl;
    
    const float d = 2.3;
    const string e = "WINDOWS";
    std::cout << d<< " " << e << endl;

}

