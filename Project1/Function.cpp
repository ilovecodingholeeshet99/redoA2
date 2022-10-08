#include "Function.h"
void AskPlayer(Character* &player1)
{
	while (1)
	{
		char input;
		std::cout << "(A)rcher or (B)arbarian? : " << std::endl;
		std::cin >> input;
		if (input == 'A' || input == 'a')
		{
			player1 = new Archer;
			std::cout << "Archer created";
			break;
		}
		else if (input == 'B' || input == 'b')
		{
			player1 = new Barbarian;
			std::cout << "Barbarian created";
			break;
		}
		else
		{
			std::cout << "Invalid entry. Try again. " << std::endl;
			continue;
		}
	}
}

