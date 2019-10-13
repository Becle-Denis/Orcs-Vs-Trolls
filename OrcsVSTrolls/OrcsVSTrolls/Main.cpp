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
#include "FireBall.h"
#include "FireBlast.h"
#include "BigPunch.h"
#include "BigFireBlast.h"


//Testing 
int main()
{

	Orc t1("DENS");
	Human t2;
	Troll t3("Pierre");

	Punch p1;
	Punch p2;
	Punch p3;
	BigPunch bp1;
	BigPunch bp2;
	BigPunch bp3;

	FireBall f1;
	FireBall f2;
	FireBall f3;
	FireBlast fb1;
	FireBlast fb2;
	FireBlast fb3;
	BigFireBlast bfb1;
	BigFireBlast bfb2;
	BigFireBlast bfb3;

	t1.addAttack(&p1);
	t2.addAttack(&p2);
	t3.addAttack(&p3);


	t1.addAttack(&bp1);
	t2.addAttack(&bp2);
	t3.addAttack(&bp3);

	t1.addAttack(&f1);
	t2.addAttack(&f2);
	t3.addAttack(&f3);

	t1.addAttack(&bfb1);
	t2.addAttack(&bfb2);
	t3.addAttack(&bfb3);


	t1.addAttack(&fb1);
	t2.addAttack(&fb2);
	t3.addAttack(&fb3);


	std::vector<Character*> arr;
	arr.push_back(&t1);
	arr.push_back(&t2);
	arr.push_back(&t3);

	Game game(arr);
	game.play();

}