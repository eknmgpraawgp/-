#include "Characteristic.hpp"
#include "Weapon.hpp"

Characteristic::Characteristic(float strength) : strength(strength) {}
float Characteristic::getDamage(Weapon& weapon) {
	return this->strength + weapon.damage;
}