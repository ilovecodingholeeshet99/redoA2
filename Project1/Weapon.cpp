#include "Weapon.h"
Weapon::Weapon()
{
	xPos = rand() % 10;
	yPos = rand() % 10;
	symbol = 'W';
	weapon = 5;
}

int Weapon::getX()
{
	return xPos;
}

int Weapon::getY()
{
	return yPos;
}

int Weapon::getWeapon()
{
	return weapon;
}

char Weapon::getSymbol()
{
	return symbol;
}

void Weapon::SamePlayerCoord(Character* player)
{
	if (xPos == player->getX() && yPos == player->getY())
	{
		xPos = rand() % 10;
		yPos = rand() % 10;
	}
}

void Weapon::SameGobCoord(Goblin* gob)
{
	if (xPos == gob->getX() && yPos == gob->getY())
	{
		xPos = rand() % 10;
		yPos = rand() % 10;
	}
}

bool Weapon::increaseAttack(Character* player)
{
	if (player->getX() == xPos && player->getY() == yPos)
	{
		return true;
	}
	return false;
}
