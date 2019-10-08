// Orc VS Trolls 
// Becle Denis C00254311
#ifndef INTERFACE
#define INTERFACE

#include <iostream>
#include "GameObject.h"
#include "Character.h" 
#include "Attack.h"
#include "Shield.h"
#include <vector>
#include <string>

class Interface
{
public:
	//inputs
	static GameObject* userChoice(std::vector<GameObject*> objects, std::string title = "Make a choice");
	static Character* userCharacterChoice(std::vector<Character*> characters, std::string title = "Choose a Character");
	static Attack* userAttackChoice(std::vector<Attack*> attack, std::string title = "Choose an Attack");
	static Shield* userShieldChoice(std::vector<Shield*> shields, std::string title = "Choose a Shield");

	//outputs
	static void display(std::string string);
	static void clear();
	static void pause();
};


#endif // !INTERFACE