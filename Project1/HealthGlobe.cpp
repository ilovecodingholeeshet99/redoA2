#include "HealthGlobe.h"
#include <random>
HealthGlobe::HealthGlobe()
{
    xPos = rand() % 10;
    yPos = rand() % 10;
    symbol = 'H';
    Health = 20;
}

int HealthGlobe::getX()
{
    return xPos;
}

int HealthGlobe::getY()
{
    return yPos;
}

int HealthGlobe::getHealth()
{
    return Health;
}

char HealthGlobe::getSymbol()
{
    return symbol;
}

void HealthGlobe::HgPlayerOverlap(Character* player)
{
    if (xPos == player->getX() && yPos == player->getY())
    {
        xPos = rand() % 10;
        yPos = rand() % 10;
    }
}

void HealthGlobe::SameGobCoord(Goblin* gob)
{
    if (xPos == gob->getX() && yPos == gob->getY())
    {
        xPos = rand() % 10;
        yPos = rand() % 10;
    }
}

bool HealthGlobe::healthIncrement(Character* player)
{
    if (player->getX() == xPos && player->getY() == yPos)
    {
        return true;
    }
    return false;
}
