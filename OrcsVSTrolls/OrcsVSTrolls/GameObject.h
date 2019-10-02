// Orc VS Trolls 
// Becle Denis C00254311
#ifndef GAMEOBJECT
#define GAMEOBJECT

#include <iostream>

class GameObject
{
public:
	static GameObject* userChoice(GameObject* objects[], int const NUMBER_OF_OBJECT, std::string title = "Make a choice");
	virtual std::string toString() = 0;
	virtual std::string toStringDescription() = 0;
};


#endif // !GAMEOBJECT