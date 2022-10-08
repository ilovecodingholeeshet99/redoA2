#include "Object.h"
#include <random>
Object::Object()
{
	xPos = rand() % 10;
	yPos = rand() % 10;
	symbol = 'O';
}

int Object::getX()
{
	return xPos;
}

int Object::getY()
{
	return yPos;
}

char Object::getSymbol()
{
	return symbol;
}



