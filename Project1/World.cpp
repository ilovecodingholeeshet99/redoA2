#include "World.h"

World::World() // Constructor allocates space for 10x10 board
{
	row = 10;
	column = 10;
	board = new char* [row]; // a double pointer which consists of an array of 10 memory location of 10 integer pointers
	for (int i = 0; i < row; i++)
	{
		board[i] = new char[column]; // allocated memory for the whole board
	}
	for (int rows = 0; rows < row; rows++)
	{										// these 2 for loops handles setting each and every board[row][col] with a space
		for (int cols = 0; cols < column; cols++)
		{
			board[rows][cols] = ' '; // if i dont set every location to blank space will init random signs
		}
	}
}

void World::SpawnPlayer(Character* character)
{
	board[character->getY()][character->getX()] = character->getSymbol(); // error because trying to access something outside of the array
}

void World::SpawnWeapon(Weapon* weapon, Character* character)
{
	board[weapon->getY()][weapon->getX()] = weapon->getSymbol();
}

void World::SpawnGoblin(Goblin* gob)
{
	board[gob->getY()][gob->getX()] = gob->getSymbol(); // error because trying to access something outside of the array
}

void World::SpawnHG(HealthGlobe* HG)
{
	board[HG->getY()][HG->getX()] = HG->getSymbol();
}

void World::printBoard()
{
	std::cout << "+" << "  ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << " ";
	}
	std::cout << std::endl;
	for (int boardRow = 0; boardRow < row; boardRow++)
	{
		if (boardRow < 9)
			std::cout << boardRow + 1 << " |";
		else
		{
			std::cout << boardRow + 1 << "|";
		}
		for (int boardCol = 0; boardCol < column; boardCol++)
		{
			std::cout << board[boardRow][boardCol] << " ";
		}
		std::cout << std::endl;
		// after every row endl so the whole board doesnt print in one straight line
	}
}

char** World::getBoard()
{
	return board;
}

void World::clearBoard(Character* player)
{
	if (player->getX() == player->GetOldX() && player->getY() == player->GetOldY())
	{
		return;
	}
	else
	{
		board[player->GetOldY()][player->GetOldX()] = ' ';
	}
}

bool World::boundaryCheck(Character* player) 
{
	if (player->getX() < 0 || player->getX() > player->GetMaxSize() || player->getY() < 0 || player->getY() > player->GetMaxSize())
	{
		return true;
	}
	return false;
}

bool World::PlayerClashGoblin(Character* player, Goblin* goblin)
{
	if (player->getX() == goblin->getX() && player->getY() == goblin->getY())
	{
		return true;
	}
	return false;
}

bool World::WeaponSameCoord(Weapon* weapon, Goblin* goblin)
{
	if (weapon->getX() == goblin->getX() && weapon->getY() == goblin->getY())
	{
		return true;
	}
	return false;
}

void World::enemyAI(Character* player, Goblin* gob)
{
	int vecX; // vec2
	int vecY;
	vecX = player->getX() - gob->getX(); // get "distance" for X
	vecY = player->getY() - gob->getY(); // get "distance" for Y
	if (vecX > 0)
	{
		gob->decreaseX();
	}
	if (vecY > 0)
	{
		gob->decreaseX();
	}
}

//bool World::PlayerClashHG(Character* player, HealthGlobe* HG)
//{
//	if (player->getX() == HG->getX() && player->getY() == HG->getY())
//	{
//		return true;
//	}
//	return false;
//}








