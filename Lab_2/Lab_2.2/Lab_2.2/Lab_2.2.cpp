#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int num1;

    cout << "Введите целое положительно число:\n";
    do {
        cin >> num1;
    } while (num1 <= 0);

    int i = 1;
    while (i <= num1)
    {
        cout << i << " ";
        ++i;
    }
    cout << "\n";

    int array[10]{ 1, 7, 3, 2, 5, 6, 9, 8, 19, 0 };
    for (int i = 0; i < 10;) {
        cout << array[i]<<" ";
        ++i;
    }
    cout << "\n";

    for (int i = 0; i < 10;) {
        if (i % 2 == 0) {
            cout << array[i] << " ";

        }
        ++i;
    }

    cout << "\n";
    int sum=0;

    for (int i = 0; i < 10;) {
        if (i % 2 != 0) {
            sum += array[i];
        }
        ++i;
    }
    cout << sum;

}
