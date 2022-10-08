#pragma once
#include <iostream>
#include "Character.h"
#include "Weapon.h"
#include "Goblin.h"
#include "HealthGlobe.h"
class World
{
private:
	int row, column;
	char** board;
public:
	World(); // create and draw world
	void SpawnPlayer(Character* character);
	void SpawnWeapon(Weapon* weapon, Character* character);
	void SpawnGoblin(Goblin* gob);
	void SpawnHG(HealthGlobe* HG);
	void printBoard();
	char** getBoard();
	void clearBoard(Character* player);
	bool boundaryCheck(Character* player);
	bool PlayerClashGoblin(Character* player, Goblin* goblin);
	bool WeaponSameCoord(Weapon* weapon, Goblin* goblin);
	void enemyAI(Character* player, Goblin* gob);
	/*bool PlayerClashHG(Character* player, HealthGlobe* HG);*/
};

