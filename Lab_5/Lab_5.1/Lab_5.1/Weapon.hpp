#pragma once

#include <string>
#include <iostream>

using namespace std;

// #1
enum class WeaponType : int {
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW,
};

class Weapon {
private:
	float damage;
	float weight;
	string title;
	WeaponType type;

public:
	Weapon();
	Weapon(string, float, float, WeaponType);

public:
	~Weapon();

public:
	string getTitle();

	float getWeight();

	float getDamage();

	WeaponType getType();

public:
	void setDamage(float);

public:
	friend ostream& operator<<(ostream&, Weapon&);

public:
	bool canTake(float);

	float getSumWeightWith(float);

	float getSumWeightWith(Weapon&);

	string getTypeTitle();
};