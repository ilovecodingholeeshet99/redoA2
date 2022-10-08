#include <iostream>
#include "Barbarian.h"
#include "Archer.h"

Barbarian::Barbarian()
{
	xPos = 0;
	yPos = 0;
	health = rand() % 80 + 20;
	symbol = 'B';
	attackPt = rand() % 10 + 10;
}

char Barbarian::getSymbol()
{
	return symbol;
}

int Barbarian::getHealth()
{
	return health;
}

int Barbarian::getAttack()
{
	return attackPt;
}

void Barbarian::setHealth(int HP)
{
	health += HP;
}

void Barbarian::setAttack(int ATT)
{
	attackPt += ATT;
}
