#include <iostream>

#include "Player.hpp"
#include "Weapon.hpp"
#include "MagicWeapon.hpp"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Weapon Gun("Gun", 20, 2, WeaponType::ONEHANDED);
	Weapon Sekira("Sekira", 30, 3, WeaponType::TWOHANDED);
	Weapon Bow("Bow", 10, 0.5, WeaponType::BOW);
	Weapon Crossbow("Crossbow", 12, 0.8, WeaponType::CROSSBOW);

	// #3: Not with ifs, I did in getTypeTitle function
	cout << Gun << endl;
	cout << Sekira << endl;
	cout << Bow << endl;
	cout << Crossbow << endl;

	Player Alex("Alex", "1234");

	cout << Alex << endl;

	MagicWeapon Laser("Лазер", 30, 10, 3.2, WeaponType::TWOHANDED);

	cout << Laser << endl;
	cout << "Могу ли я взять? " << (Laser.canTake(4) ? "Да" : "Нет") << endl;
	cout << "Совместный вес Laser и Gun " << Laser.getSumWeightWith(Gun) << endl;

	cout << endl;

	return 0;
}