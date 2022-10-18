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

void Goblin::DoAI(Character* target)
{
    // Calculate Distance from Goblin to Target (aka Player)
    int xdist = target->getX() - xpos;
    int ydist = target->getY() - ypos;

    // Use Ternary If to check if distance is positive or negative
    /*
     * Ternary is same as if statement
     *
     * Ternary Syntax
     * [Expression] ? [value if true] : [value if false];
     * eg
     * int b = 5;
     * int a = (b == 5) ? 3 : 2;
     *
     * a is 3;
     *
     * Same as
     * if (b == 5)
     * {
     *      a = 3;
     * }
     * else
     * {
     *      a = 2;
     * }
     */
    int xmove = xdist > 0 ? 1 : -1;
    int ymove = ydist > 0 ? 1 : -1;

    // Move towards player
    /*
     * If xdist is positive, xmove would be 1 so we move 1 on x axis which would be closer to player
     * ydist and ymove is same concept
     *
     * if when testing, the goblin doesn't move towards player, flip the 1 and -1 in the ternary section
     */
    xpos += xmove;
    ypos += ymove;
}

void Goblin::saveOldPos()
{
    oldx = xpos;
    oldy = ypos;
}

int Goblin::GetOldX()
{
    return oldx;
}

int Goblin::getOldY()
{
    return oldy;
}
