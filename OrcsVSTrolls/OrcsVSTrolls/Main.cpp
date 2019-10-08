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
	Orc t2;

	std::vector<GameObject*> arr;
	arr.push_back(&t1);
	arr.push_back(&t2);


	std::cout << Interface::userChoice(arr)->toStringDescription();
}