#pragma once
#include "Character.h"
class Goblin : public Character
{
private:
	int xpos;
	int ypos;
	int health;
	char symbol;
	int attackPt;
public:
	Goblin();
	int getX();
	int getY();
	int increaseX();
	int increaseY();
	int decreaseX();
	int decreaseY();
	char getSymbol();
	void CheckSameCoord(Goblin* gob);
	void PlayerSameCoord(Character* player);
};

