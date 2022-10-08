#include "Goblin.h"
#include <random>
Goblin::Goblin()
{
	xpos = rand() % 10;
	ypos = rand() % 10;
	health = 20;
	symbol = 'G';
	attackPt = 5;
}

int Goblin::getX()
{
	return xpos;
}

int Goblin::getY()
{
	return ypos;
}

int Goblin::setX()
{
	return xpos--;
}

int Goblin::setY()
{
	return ypos--;
}

char Goblin::getSymbol()
{
	return symbol;
}

void Goblin::CheckSameCoord(Goblin* gob)
{
	if (xpos == gob->getX() && ypos == gob->getY())
	{
		xpos = rand() % 10;
		ypos = rand() % 10;
	}
}

void Goblin::PlayerSameCoord(Character* player)
{
	if (xpos == player->getX() && ypos == player->getY())
	{
		xpos = rand() % 10;
		ypos = rand() % 10;
	}
}


