#pragma once

#include <string>
#include <iostream>

using namespace std;

class Weapon {

private:
	float damage;
	float weight;
	string name;

public:
	Weapon();
	Weapon(string, float, float);

	~Weapon();

	friend ostream& operator<<(ostream&, Weapon&);

	bool canTake(float);

	float getSum(float);

	float getSum(Weapon&);
};
