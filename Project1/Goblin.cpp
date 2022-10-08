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

int Goblin::increaseX()
{
	return xpos++;
}

int Goblin::increaseY()
{
	return ypos++;
}

int Goblin::decreaseX()
{
	return xpos--;
}

int Goblin::decreaseY()
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


