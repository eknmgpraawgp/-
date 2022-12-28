#pragma once
#pragma once

#include <string>
#include <iostream>
#include "Characteristic.hpp"


using namespace std;

class Weapon {
	friend class Characteristic;
private:
	float damage;
	float weight;
	string name;

public:
	Weapon();
	Weapon(string, float, float);

	~Weapon();

public:
	string getName();

	float getWeight();

	float getDamage();

public:
	void setDamage(float);

public:
	friend ostream& operator<<(ostream&, Weapon&);

	bool canTake(float);

	float getSum(float);

	float getSum(Weapon&);
};
