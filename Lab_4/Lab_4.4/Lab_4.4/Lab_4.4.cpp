#include <iostream>

#include "Weapon.hpp"
#include "MyMath.hpp"
#include "Characteristic.hpp"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Weapon gun("gun", 10, 0.7);
	cout << gun << endl;

	Weapon* knife = new Weapon("knife", 5, 0.5);
	cout << *knife << endl;

	cout << "Могу ли я взять пистолет? " << (gun.canTake(2) ? "Да" : "Нет") << endl;
	cout << "Вес пистолета и доп.нагрузки: " << gun.getSum(7) << endl;
	cout << "Вес пистолета и ножа: " << gun.getSum(*knife) << endl;

	cout << "Оружие: " << gun.getName() << endl;
	cout << "Вес: " << gun.getWeight() << endl;
	cout << "Урон: " << gun.getDamage() << endl;

	gun.setDamage(13);
	cout << "Новый урон пистолета: " << gun.getDamage() << endl;
	Characteristic gunCharacteristic(10);
	cout << "Характеристика gun " << gunCharacteristic.getDamage(gun) << endl;

	// MyMath
	cout << "MyMath: 7 + 3 = " << MyMath::add(7, 3) << endl;
	cout << "MyMath: 4 - 5 = " << MyMath::sub(4, 5) << endl;
	cout << "MyMath: 6 * 2 = " << MyMath::mult(6, 2) << endl;
	cout << "MyMath: 64 / 8 = " << MyMath::div(64, 8) << endl;
	cout << MyMath::callsCount << "раза были вызваны методы" << endl;

	delete knife;

	return 0;
}