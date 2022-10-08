#pragma once
#include "Object.h"
#include "Character.h"
#include "Goblin.h"
#include "HealthGlobe.h"
#include <random>
class Weapon : public Object
{
private:
	int xPos;
	int yPos;
	char symbol;
	int weapon;
public:
	Weapon();
	int getX();
	int getY();
	int getWeapon();
	char getSymbol();
	void SamePlayerCoord(Character* player);
	void SameGobCoord(Goblin* gob);
	bool increaseAttack(Character* player);
};

