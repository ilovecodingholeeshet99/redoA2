#pragma once
class Character
{
private:
	int oldX;
	int oldY;
	int xPos;
	int yPos;
	int health;
	char symbol;
	char move;
	int maxSize;
	int attackPt;
public:
	Character();
	int getX();
	int getY();
	int GetOldX();
	int GetOldY();
	virtual int getHealth();
	virtual int getAttack();
	int GetMaxSize();
	void decreaseX();
	void increaseX();
	void decreaseY();
	void increaseY();
	void setX(int x);
	void setY(int y);
	virtual void setHealth(int HP);
	virtual void setAttack(int ATT);
	virtual char getSymbol(); // need set to virtual because dont know whether archer or barb will be selected
	void playerMovement(char movement, Character* player);
	void PlayerLastLocation(); // save player last location
};

