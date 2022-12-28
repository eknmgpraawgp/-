#include "MagicWeapon.hpp"

MagicWeapon::MagicWeapon() : Weapon(), magicDamage(0) {}

MagicWeapon::MagicWeapon(string title, float damage, float magicDamage, float weight, WeaponType type) : Weapon(title, damage, weight, type), magicDamage(magicDamage) {}

MagicWeapon::~MagicWeapon() {
	cout << *this << " ��� ���������" << endl;
}

float MagicWeapon::getMagicDamage() {
	return this->magicDamage;
}

float MagicWeapon::getFullDamage() {
	return this->getDamage() + this->getMagicDamage();
}

ostream& operator<<(ostream& out, MagicWeapon& weapon) {
	out << weapon.getTypeTitle() << "(�����) \"" << weapon.getTitle() << "\": ���� = " << weapon.getFullDamage() << "(" << weapon.getMagicDamage() << " �����), ��� = " << weapon.getWeight() << " ��";

	return out;
}