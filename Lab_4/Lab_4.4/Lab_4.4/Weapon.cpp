#include <iostream>

#include "Weapon.hpp"


Weapon::Weapon() : Weapon("hand", 0, 0) {}
Weapon::Weapon(string name, float damage, float weight) : name(name), damage(damage), weight(weight) {}

Weapon::~Weapon() {
	cout << *this << " уничтожается" << endl;
}
string Weapon::getName() {
	return this->name;
}

float Weapon::getWeight() {
	return this->weight;
}

float Weapon::getDamage() {
	return this->damage;
}

void Weapon::setDamage(float damage) {
	this->damage = damage;;
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