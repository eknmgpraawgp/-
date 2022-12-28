#include <iostream>

#include "Weapon.hpp"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Weapon gun("gun", 10, 0.7);
	cout << gun<< endl;

	Weapon* knife = new Weapon("knife", 5, 0.5);
	cout << *knife << endl;

	cout << "Могу ли я взять пистолет? " << (gun.canTake(2) ? "Да" : "Нет") << endl;
	cout << "Вес пистолета и доп.нагрузки: " << gun.getSum(7) << endl;
	cout << "Вес пистолета и ножа: " << gun.getSum(*knife) << endl;

	delete knife;

	return 0;
}