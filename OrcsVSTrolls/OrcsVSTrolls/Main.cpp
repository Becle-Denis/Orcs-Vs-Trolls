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


//Testing 
int main()
{

	Orc t1("DENS");
	Orc t2;

	Character* ptr_char = &t1;

	std::cout << t1.toString() << "\n" << t2.toString() << "\n";

	std::cout << "\n---------------------------\n";

	std::cout << ptr_char->toStringDescription() << "\n\n";
	std::cout << t2.toStringDescription() << std::endl;

	ptr_char->takeDamage(15);
	t2.spendMana(5);

	std::cout << "\n---------------------------\n";

	std::cout << ptr_char->toStringDescription() << "\n\n";
	std::cout << t2.toStringDescription() << std::endl;
}