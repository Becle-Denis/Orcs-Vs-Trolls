// Orc VS Trolls 
// Becle Denis C00254311

#include <iostream>
#include <string>
#include "Character.h"
#include "Orc.h"
#include "Troll.h"
#include "Attack.h"
#include "GameObject.h"


//Testing 
int main()
{

	Troll t1("DENS");
	Troll t2;

	Character* ptr_char = &t1;

	std::cout << t1.toString() << "\n" << t2.toString() << "\n";

	std::cout << "\n---------------------------\n";

	std::cout << ptr_char->toStringDescription() << "\n\n";
	std::cout << t2.toStringDescription() << std::endl;
}