#include <iostream>
#include "Archer.h"
#include "Barbarian.h"

Archer::Archer()
{	
	xPos = 0;
	yPos = 0;
	health = rand() % 60 + 20;
	symbol = 'A';
	attackPt = rand() % 10 + 1;
}

char Archer::getSymbol()
{
	return symbol;
}

int Archer::getHealth()
{
	return health;
}

int Archer::getAttack()
{
	return attackPt;
}

void Archer::setHealth(int HP)
{
	health += HP;
}

void Archer::setAttack(int ATT)
{
	attackPt += ATT;
}


