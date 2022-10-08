#pragma once
#include "Character.h"
class Archer : public Character // archer is derived class of character
{
private:
	int xPos;
	int yPos;
	int health;
	char symbol;
	int attackPt;
public:
	Archer();
	char getSymbol();
	int getHealth();
	int getAttack();
	void setHealth(int HP);
	void setAttack(int ATT);
};

