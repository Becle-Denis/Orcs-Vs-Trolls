// Orc VS Trolls 
// Becle Denis C00254311

#include <iostream>
#include <string>
#include <vector>

#include "Character.h"
#include "Orc.h"
#include "Troll.h"
#include "Human.h"
#include "Game.h"
#include "Punch.h"


//Testing 
int main()
{

	Orc t1("DENS");
	Human t2;
	Troll t3("Pierre");

	Punch p1;
	Punch p2;
	Punch p3;

	t1.addAttack(&p1);
	t2.addAttack(&p2);
	t3.addAttack(&p3);

	std::vector<Character*> arr;
	arr.push_back(&t1);
	arr.push_back(&t2);
	arr.push_back(&t3);

	Game game(arr);
	game.play();

}