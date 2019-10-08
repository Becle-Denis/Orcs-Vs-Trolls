// Orc VS Trolls 
// Becle Denis C00254311

#include <iostream>
#include <string>
#include "Character.h"
#include "Orc.h"
#include "Troll.h"
#include "Human.h"
#include "Attack.h"
#include "GameObject.h"
#include "Interface.h"
#include <vector>


//Testing 
int main()
{

	Orc t1("DENS");
	Human t2;

	std::vector<Character*> arr;
	arr.push_back(&t1);
	arr.push_back(&t2);


	std::cout << Interface::userCharacterChoice(arr)->toStringDescription();
}