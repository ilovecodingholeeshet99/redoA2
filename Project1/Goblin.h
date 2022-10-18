#pragma once
#include "Character.h"
class Goblin : public Character
{
private:
	int xpos;
	int ypos;
    int oldx;
    int oldy;
	int health;
	char symbol;
	int attackPt;
public:
	Goblin();
    void saveOldPos();
	int getX();
	int getY();
    int getOldX();
    int getOldY();
	int increaseX();
	int increaseY();
	int decreaseX();
	int decreaseY();
	char getSymbol();
	void CheckSameCoord(Goblin* gob);
	void PlayerSameCoord(Character* player);
    void DoAI(Character* target);
};

