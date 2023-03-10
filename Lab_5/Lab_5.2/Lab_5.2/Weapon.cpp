#include "Weapon.hpp"


Weapon::Weapon() : Weapon("hand", 0, 0, WeaponType::TWOHANDED) {}
Weapon::Weapon(string title, float damage, float weight, WeaponType type) : title(title), damage(damage), weight(weight), type(type) {}

Weapon::~Weapon() {
    cout << *this << " ??? ?????????" << endl;
}

string Weapon::getTitle() {
    return this->title;
}

float Weapon::getWeight() {
    return this->weight;
}

float Weapon::getDamage() {
    return this->damage;
}

WeaponType Weapon::getType() {
    return this->type;
}

float Weapon::getFullDamage() {
    return this->getDamage();
}

void Weapon::setDamage(float damage) {
    this->damage = damage;;
}

ostream& operator<<(ostream& out, Weapon& weapon) {
    out << weapon.getTypeTitle() << " \"" << weapon.getTitle() << "\": ???? = " << weapon.getFullDamage() << ", ??? = " << weapon.getWeight() << " ??";

    return out;
}

bool Weapon::operator>(Weapon& weapon) {
    return this->getFullDamage() > weapon.getFullDamage();
}

bool Weapon::operator<(Weapon& weapon) {
    return this->getFullDamage() < weapon.getFullDamage();
}

bool Weapon::canTake(float maxWeight) {
    return maxWeight >= this->weight;
}

float Weapon::getSumWeightWith(float loadWeight) {
    return this->weight + loadWeight;
}

float Weapon::getSumWeightWith(Weapon& weapon) {
    return getSumWeightWith(weapon.weight);
}

string Weapon::getTypeTitle() {
    switch (this->type) {
    case WeaponType::ONEHANDED:
        return "?????????? ??????";
    case WeaponType::TWOHANDED:
        return "????????? ??????";
    case WeaponType::BOW:
        return "???";
    case WeaponType::CROSSBOW:
        return "???????";

    default:
        return "??????????? ??????";
    }
}