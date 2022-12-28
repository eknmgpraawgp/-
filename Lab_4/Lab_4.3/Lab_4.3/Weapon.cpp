#include "Weapon.hpp"


Weapon::Weapon() : Weapon("hand", 0, 0) {}
Weapon::Weapon(string name, float damage, float weight) : name(name), damage(damage), weight(weight) {}

Weapon::~Weapon() {
	cout << *this << " уничтожается" << endl;
}

ostream& operator<<(ostream& out, Weapon& weapon) {
	out << "Оружие \"" << weapon.name << "\": урон = " << weapon.damage << ", вес=" << weapon.weight << "кг";

	return out;
}

bool Weapon::canTake(float maxWeight) {
	return maxWeight >= this->weight;
}

float Weapon::getSum(float loadWeight) {
	return this->weight + loadWeight;
}

float Weapon::getSum(Weapon& weapon) {
	return getSum(weapon.weight);
}