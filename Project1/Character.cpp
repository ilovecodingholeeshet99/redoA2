#include <iostream>
#include "Character.h"
#include <random>
Character::Character()
{
	oldX = 0;
	oldY = 0;
	xPos = 0;
	yPos = 0;
	health = 100;
	symbol = 'C'; // random prefixes
	move = 'C'; // random prefixes
	maxSize = 9;
	attackPt = 10;
}


int Character::getX()
{
	return xPos;
}

int Character::getY()
{
	return yPos;
}

int Character::GetOldX()
{
	return oldX;
}

int Character::GetOldY()
{
	return oldY;
}

int Character::getHealth()
{
	return health;
}

int Character::getAttack()
{
	return attackPt;
}

int Character::GetMaxSize()
{
	return maxSize;
}

void Character::decreaseX()
{
	xPos--;
}

void Character::increaseX()
{
	xPos++;
}

void Character::decreaseY()
{
	yPos--;
}

void Character::increaseY()
{
	yPos++;
}

void Character::setX(int x)
{
	xPos = x;
}

void Character::setY(int y )
{
	yPos = y;
}

void Character::setHealth(int HP)
{
	health += HP;
}

void Character::setAttack(int ATT)
{
	attackPt += ATT;
}

char Character::getSymbol()
{
	return symbol;
}

void Character::playerMovement(char movement, Character* player)
{
	switch (movement)
	{
	case 'W':
		yPos--;
		break;
	case 'S':
		yPos++;
		break;
	case 'A':
		xPos--;
		break;
	case 'D':
		xPos++;
		break;
	case 'w':
		yPos--;
		break;
	case 's':
		yPos++;
		break;
	case 'a':
		xPos--;
		break;
	case 'd':
		xPos++;
		break;
	default:
		std::cout << "Wrong input. " << std::endl;
	}
}

void Character::PlayerLastLocation()
{
	oldX = xPos;
	oldY = yPos;
}












