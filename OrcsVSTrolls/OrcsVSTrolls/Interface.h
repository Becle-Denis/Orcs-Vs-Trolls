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

class Interface
{
public:
	static GameObject* userChoice(std::vector<GameObject*> objects, std::string title = "Make a choice");
	static Character* userCharacterChoice(std::vector<Character*> characters, std::string title = "Choose a Character");
	static Attack* userAttackChoice(std::vector<Attack*> attack, std::string title = "Choose an Attack");
};


#endif // !INTERFACE