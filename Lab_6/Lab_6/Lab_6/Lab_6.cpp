#include <iostream>

using namespace std;

// #8
enum class BirthDateExceptionCode : int {
    UNAVAILABLE,
    WERENT_BORN,
    NEGATIVE_NUMBER,
};

class BirthDateException : public std::exception {
private:
    BirthDateExceptionCode code;

public:
    BirthDateException(BirthDateExceptionCode code) : code(code) {}

    const char* what() const throw() override {
        if (code == BirthDateExceptionCode::UNAVAILABLE) {
            return "Что-то не верится...";
        }

        if (code == BirthDateExceptionCode::WERENT_BORN) {
            return "Вы еще не родились";
        }

        if (code == BirthDateExceptionCode::NEGATIVE_NUMBER) {
            return "Вы ввели отрицательное число";
        }
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    try
    {
        int a;

        // #1
        cout << "Введите 1, 2 или 3: ";
        cin >> a;

        cout << "Вы ввели: ";

        // #2
        switch (a) {
        case 1:
            cout << "Один";
            break;
        case 2:
            cout << "Два";
            break;
        case 3:
            cout << "Три";
            break;
        default:
            throw "Некоректное значение";
        }
    }
    catch (const char* error) {
        cout << error;
    }

    try
    {
        int birthDate;

        cout << endl << "Введите свою дату рождения: ";
        cin >> birthDate;

        if (birthDate >= 0 && birthDate < 1850) {
            throw BirthDateException(BirthDateExceptionCode::UNAVAILABLE);
        }

        if (birthDate > 2022) {
            throw BirthDateException(BirthDateExceptionCode::WERENT_BORN);
        }

        if (birthDate < 0) {
            throw BirthDateException(BirthDateExceptionCode::NEGATIVE_NUMBER);
        }

        cout << "Спасибо!";
    }
    catch (BirthDateException& error) {
        cout << error.what();
    }

    return 0;
}