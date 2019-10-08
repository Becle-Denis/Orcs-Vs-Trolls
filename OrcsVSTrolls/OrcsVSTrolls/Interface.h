// Orc VS Trolls 
// Becle Denis C00254311
#ifndef INTERFACE
#define INTERFACE

#include <iostream>
#include "GameObject.h"
#include "Character.h" 
#include "Attack.h"
#include "Shield.h"

class Interface
{
public:
	static GameObject* userChoice(GameObject* objects[], int const NUMBER_OF_OBJECTS, std::string title = "Make a choice");
};


#endif // !INTERFACE