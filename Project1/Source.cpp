#include <iostream>
#include "Character.h"
#include "Archer.h"
#include "Barbarian.h"
#include "World.h"
#include "Function.h"
#include "Object.h"
#include "Weapon.h"
#include "Goblin.h"
#include "HealthGlobe.h"
int main()
{
	srand(time(NULL));
	// Create character type pointer
	Character* player;
	Weapon* weapon = new Weapon;
	Goblin* gob1 = new Goblin;
	Goblin* gob2 = new Goblin;
	Goblin* gob3 = new Goblin;
	HealthGlobe* HG1 = new HealthGlobe;
	HealthGlobe* HG2 = new HealthGlobe;
	AskPlayer(player); // Ask player which character they want to play
	gob1->PlayerSameCoord(player);
	gob2->PlayerSameCoord(player);
	gob3->PlayerSameCoord(player);
	weapon->SamePlayerCoord(player);
	HG1->HgPlayerOverlap(player);
	HG2->HgPlayerOverlap(player);
	gob2->CheckSameCoord(gob1);
	gob3->CheckSameCoord(gob2);
	weapon->SameGobCoord(gob1); // reason why gob dont overlap player because the check for whether weapon has overlapped the player has already been executed
	weapon->SameGobCoord(gob2);
	weapon->SameGobCoord(gob3);
	HG1->SameGobCoord(gob1);
	HG1->SameGobCoord(gob2);
	HG1->SameGobCoord(gob3);
	HG2->SameGobCoord(gob1);
	HG2->SameGobCoord(gob2);
	HG2->SameGobCoord(gob3);
	std::cout << std::endl;
	World* world = new World; // World point allocates space for the world
	world->SpawnPlayer(player); 
	world->SpawnWeapon(weapon, player);
	world->SpawnGoblin(gob1);
	world->SpawnGoblin(gob2);
	world->SpawnGoblin(gob3);
	world->SpawnHG(HG1);
	world->SpawnHG(HG2);
	world->printBoard();
	while (true)
	{
		char move;
		player->PlayerLastLocation(); // save player last x and y position
		std::cout << "(W)(A)(S)(D) to move and (H) to display stats: " << std::endl;
		std::cout << player->getX() << " " << player->getY() << std::endl;
		std::cout << player->getHealth() << std::endl;
		std::cout << player->getAttack() << std::endl;
		std::cin >> move;
		player->playerMovement(move, player);  // Ask player to move
		system("CLS"); // clear screen so no dupe board
		if (HG1->healthIncrement(player))
		{
			player->setHealth(HG1->getHealth());
		}
		if (HG2->healthIncrement(player))
		{
			player->setHealth(HG2->getHealth());
		}
		if (weapon->increaseAttack(player))
		{
			player->setAttack(weapon->getWeapon());
		}
		if (world->boundaryCheck(player)) // check against border
		{
			player->setX(player->GetOldX());
			player->setY(player->GetOldY());
		}
		if (world->PlayerClashGoblin(player, gob1)) // check against gob
		{
			player->setX(player->GetOldX());
			player->setY(player->GetOldY());
		}
		if (world->PlayerClashGoblin(player, gob2))
		{
			player->setX(player->GetOldX());
			player->setY(player->GetOldY());
		}
		if (world->PlayerClashGoblin(player, gob3))
		{
			player->setX(player->GetOldX());
			player->setY(player->GetOldY());
		}
		/*if (world->PlayerClashHG(player, HG1))
		{
			player->setX(player->GetOldX());
			player->setY(player->GetOldY());
		}
		if (world->PlayerClashHG(player, HG2))
		{
			player->setX(player->GetOldX());
			player->setY(player->GetOldY());
		}*/
		world->SpawnPlayer(player); // spawn again to updated position
		world->clearBoard(player); // set saved last player position to blank 
		world->printBoard();
	}
}	