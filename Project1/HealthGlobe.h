#pragma once
#include "Object.h"
#include "Character.h"
#include "Goblin.h"
class HealthGlobe
{
private:
	int xPos;
	int yPos;
	char symbol;
	int Health;
public:
	HealthGlobe();
	int getX();
	int getY();
	int getHealth();
	char getSymbol();
	void HgPlayerOverlap(Character* player);
	void SameGobCoord(Goblin* gob);
	bool healthIncrement(Character* player);
};

