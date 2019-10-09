#include "Interface.h"
#include <iostream>

GameObject* Interface::userChoice(std::vector<GameObject*> objects, std::string title)
{
	int objectIndex;
	int size = static_cast<int>(objects.size());
	bool validInput = false;
	do {
		int userInput = 0;
		std::cout << "----- " << title << " -----" << std::endl;
		std::cout << "0 - Abort" << std::endl;
		for (int i = 0; i < size; i++)
		{
			int j = i + 1;
			std::cout << j << " - " << objects.at(i)->toString() << " ( -" << j << "  for details )" << std::endl;
		}

		std::cin >> userInput;
		if (userInput == 0)
		{
			validInput = true;
			objectIndex = -1;
		}
		else if (userInput > 0 && userInput <= size)
		{
			validInput = true;
			objectIndex = userInput - 1;
		}
		else if (userInput < 0 && userInput >= -size)
		{
			objectIndex = (userInput * -1) - 1;
			std::cout << "Details (" << userInput << ")" << std::endl;
			std::cout << objects.at(objectIndex)->toStringDescription() << std::endl << std::endl;
			system("PAUSE");
		}
		else {
			std::cout << "Invalid Choice !, Please retry :)" << std::endl << std::endl;
			system("PAUSE");
		}
	} while (!validInput);


	if (objectIndex == -1)
	{
		return nullptr;
	}
	else 
	{
		return objects.at(objectIndex);
	}
	
}

Character* Interface::userCharacterChoice(std::vector<Character*> characters, std::string title)
{
	std::vector<GameObject*> objects;
	for (Character* char_ptr : characters)
	{
		objects.push_back(char_ptr);
	}
	return static_cast<Character*>(userChoice(objects, title));
}

Attack* Interface::userAttackChoice(std::vector<Attack*> attacks, std::string title)
{
	std::vector<GameObject*> objects;
	for (Attack* atk_ptr : attacks)
	{
		objects.push_back(atk_ptr);
	}
	return static_cast<Attack*>(userChoice(objects, title));
}

Shield* Interface::userShieldChoice(std::vector<Shield*> shields, std::string title)
{
	std::vector<GameObject*> objects;
	for (Shield* shd_ptr : shields)
	{
		objects.push_back(shd_ptr);
	}
	return static_cast<Shield*>(userChoice(objects, title));
}

void Interface::display(std::string string)
{
	std::cout << string << std::endl;
}

void Interface::clear()
{
	system("CLS");
}

void Interface::pause()
{
	system("PAUSE");
}
