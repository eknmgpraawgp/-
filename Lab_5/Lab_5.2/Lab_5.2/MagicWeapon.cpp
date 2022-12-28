#include "MagicWeapon.hpp"

MagicWeapon::MagicWeapon() : Weapon(), magicDamage(0) {}

MagicWeapon::MagicWeapon(string title, float damage, float magicDamage, float weight, WeaponType type) : Weapon(title, damage, weight, type), magicDamage(magicDamage) {}

MagicWeapon::~MagicWeapon() {
	cout << *this << " был уничтожен" << endl;
}

float MagicWeapon::getMagicDamage() {
	return this->magicDamage;
}

float MagicWeapon::getFullDamage() {
	return this->getDamage() + this->getMagicDamage();
}

ostream& operator<<(ostream& out, MagicWeapon& weapon) {
	out << weapon.getTypeTitle() << "(магия) \"" << weapon.getTitle() << "\": урон = " << weapon.getFullDamage() << "(" << weapon.getMagicDamage() << " магия), вес = " << weapon.getWeight() << " кг";

	return out;
}