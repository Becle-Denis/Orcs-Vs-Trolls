#include "Interface.h"

GameObject* Interface::userChoice(GameObject* objects[], int const NUMBER_OF_OBJECT, std::string title)
{
	int objectIndex;
	bool validInput = false;
	do {
		int userInput = 0;
		std::cout << "----- " << title << " -----" << std::endl;
		for (int i = 0; i < NUMBER_OF_OBJECT; i++)
		{
			int j = i + 1;
			std::cout << j << " - " << objects[i]->toString() << " ( -" << j << "  for details )" << std::endl;
		}
		std::cin >> userInput;

		if (userInput > 0 && userInput <= NUMBER_OF_OBJECT)
		{
			validInput = true;
			objectIndex = userInput - 1;
		}
		else if (userInput < 0 && userInput >= -NUMBER_OF_OBJECT)
		{
			objectIndex = (userInput * -1) - 1;
			std::cout << "Details (" << userInput << ")" << std::endl;
			std::cout << objects[objectIndex]->toStringDescription() << std::endl << std::endl;
			system("PAUSE");
		}
		else {
			std::cout << "Invalid Choice !, Please retry :)" << std::endl << std::endl;
			system("PAUSE");
		}
	} while (!validInput);

	return objects[objectIndex];
}