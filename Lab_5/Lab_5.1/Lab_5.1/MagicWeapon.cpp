#include "MagicWeapon.hpp"

MagicWeapon::MagicWeapon() : Weapon(), magicDamage(0) {}

MagicWeapon::MagicWeapon(string title, float damage, float magicDamage, float weight, WeaponType type) : Weapon(title, damage, weight, type), magicDamage(magicDamage) {}

MagicWeapon::~MagicWeapon() {
	cout << *this << " был уничтожен" << endl;
}

float MagicWeapon::getMagicDamage() {
	return this->magicDamage;
}

ostream& operator<<(ostream& out, MagicWeapon& weapon) {
	out << weapon.getTypeTitle() << " волшебное \"" << weapon.getTitle() << "\": урон = " << weapon.getDamage() << "(+" << weapon.getMagicDamage() << " магия), вес = " << weapon.getWeight() << " кг";

	return out;
}