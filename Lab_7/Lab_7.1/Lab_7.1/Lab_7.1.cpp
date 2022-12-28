#include <string>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string str;

    cout << "Введите строку: ";
    cin >> str;
    cout << "Подстрока от 2 до 4 символа: " << str.substr(1, 3) << endl;

    int firstAIndex = str.find('a');

    if (firstAIndex >= 0) {
        cout << "Индекс первого вхождения строки 'а' " << firstAIndex + 1 << endl;
    }
    else {
        cout << "Символа не найдено" << endl;
    }

    return 0;
}