#include "Ai.h"
#include <ctime>

Character* Ai::aiCharacterChoice(std::vector<Character*> characters)
{
	int number = selectRandom(characters.size());
	if (number == -1)
	{
		return nullptr;
	}
	else
	{
		return characters.at(static_cast<unsigned int>(number));
	}
}

Attack* Ai::aiAttackChoice(std::vector<Attack*> attacks)
{
	int number = selectRandom(attacks.size());
	if (number == -1)
	{
		return nullptr;
	}
	else
	{
		return attacks.at(static_cast<unsigned int>(number));
	}
}

Shield* Ai::aiShieldChoice(std::vector<Shield*> shields)
{
	int number = selectRandom(shields.size());
	if (number == -1)
	{
		return nullptr;
	}
	else
	{
		return shields.at(static_cast<unsigned int>(number));
	}
}

int Ai::selectRandom(unsigned int max)
{
	if (max == 0)
	{
		return -1;
	}

	srand(static_cast<unsigned int>(time(nullptr)));
	int number = rand() % max;
	return number;
}
