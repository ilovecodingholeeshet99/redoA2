#pragma once
class Object
{
private:
	int xPos;
	int yPos;
	char symbol;
public:
	Object();
	int getX();
	int getY();
	char getSymbol();
};

