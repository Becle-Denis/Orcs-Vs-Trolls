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


//Testing 
int main()
{

	Orc t1("DENS");
	Orc t2;

	GameObject* arr[] = { &t1,&t2 };

	Interface::userChoice(arr,2);
}