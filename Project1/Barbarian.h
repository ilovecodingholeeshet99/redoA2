#pragma once
#include "Character.h"
class Barbarian : public Character // barb is derived class of character
{
private:
	int xPos;
	int yPos;
	int health;
	char symbol;
	int attackPt;
public:
	Barbarian();
	char getSymbol();
	int getHealth();
	int getAttack();
	void setHealth(int HP);
	void setAttack(int ATT);
};

