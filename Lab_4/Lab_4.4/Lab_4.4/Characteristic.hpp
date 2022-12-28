#pragma once

class Weapon;

class Characteristic {
private:
	float strength;

public:
	Characteristic(float);

public:
	float getDamage(Weapon&);
};