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
		for (int i = 0; i < size; i++)
		{
			int j = i + 1;
			std::cout << j << " - " << objects.at(i)->toString() << " ( -" << j << "  for details )" << std::endl;
		}

		std::cin >> userInput;

		if (userInput > 0 && userInput <= size)
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



	return objects.at(objectIndex);
}
