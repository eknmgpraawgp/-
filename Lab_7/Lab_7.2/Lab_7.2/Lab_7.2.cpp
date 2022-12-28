#include <regex>
#include <string>
#include <iostream>

using namespace std;

const regex nameRegex("[A-Z][a-z]{1,31}");

const regex emailRegex(R"([_a-z0-9-]+(\.[_a-z0-9-]+)*@[a-z0-9-]+(\.[a-z0-9-]+)*(\.[a-z]{2,4}))", regex_constants::icase);


int main() {
    setlocale(LC_ALL, "Russian");
    string name;

    cout << "Введите имя (на анлийском): ";
    cin >> name;

    if (regex_match(name, nameRegex)) {
        cout << "Правильное имя:" << endl;
    }
    else {
        cout << "Неверное имя" << endl;
    }

    string stringWithEmails = "zxcqwe hello@mail.ru asd_=_-1 qweqwe@e.e alice@gmail.com )-1231-925";

    smatch  emailMathes;
    string::const_iterator searchStart(stringWithEmails.cbegin());

    cout << "Найденные e-mail адреса: ";

    while (regex_search(searchStart, stringWithEmails.cend(), emailMathes, emailRegex)) {
        cout << (searchStart == stringWithEmails.cbegin() ? "" : "; ") << emailMathes[0];
        searchStart = emailMathes.suffix().first;
    }

    cout << endl;

    return 0;
}