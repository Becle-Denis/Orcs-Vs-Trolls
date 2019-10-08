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


//Testing 
int main()
{

	Orc t1("DENS");
	Human t2;

	std::vector<Character*> arr;
	arr.push_back(&t1);
	arr.push_back(&t2);

	Game game(arr);
	game.play();

}