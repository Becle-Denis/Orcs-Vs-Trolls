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
#include "IceBall.h"
#include "Regeneration.h"
#include "RegenerationSpell.h"
#include "Tap.h"
#include "IronShield.h"
#include "Twisted.h"





//Testing 
int main()
{

	std::cout << "---------- Orcs Vs Troll V1 ----------" << std::endl;
	std::cout << "You are a troll" << std::endl;
	system("PAUSE");

	//Character creation
	Orc t1;
	Human t2;
	Troll t3("Denis"); //player

	//shield creation
	IronShield s1;
	IronShield s2;
	IronShield s3;

	t1.addShield(&s1);
	t2.addShield(&s2);
	t3.addShield(&s3);

	//attack creation
	Punch p1;
	Punch p2;
	Punch p3;

	Tap ta1;
	Tap ta2;
	Tap ta3;

	BigPunch bp1;
	BigPunch bp2;
	BigPunch bp3;

	Twisted tw1;
	Twisted tw2;
	Twisted tw3;

	Regeneration r1;
	Regeneration r2;
	Regeneration r3;

	IceBall i3;

	FireBall f1;
	FireBall f2;
	FireBall f3;

	FireBlast fb1;
	FireBlast fb2;
	FireBlast fb3;

	BigFireBlast bfb1;
	BigFireBlast bfb2;

	RegenerationSpell rs1;
	RegenerationSpell rs2;
	RegenerationSpell rs3;


	

	t1.addAttack(&p1);
	t2.addAttack(&p2);
	t3.addAttack(&p3);

	t1.addAttack(&ta1);
	t2.addAttack(&ta2);
	t3.addAttack(&ta3);

	t1.addAttack(&bp1);
	t2.addAttack(&bp2);
	t3.addAttack(&bp3);

	t1.addAttack(&tw1);
	t2.addAttack(&tw2);
	t3.addAttack(&tw3);

	t1.addAttack(&r1);
	t2.addAttack(&r2);
	t3.addAttack(&r3);

	t3.addAttack(&i3);



	t1.addAttack(&f1);
	t2.addAttack(&f2);
	t3.addAttack(&f3);

	t1.addAttack(&fb1);
	t2.addAttack(&fb2);
	t3.addAttack(&fb3);

	t1.addAttack(&bfb1);
	t2.addAttack(&bfb2);

	t1.addAttack(&rs1);
	t2.addAttack(&rs2);
	t3.addAttack(&rs3);





	std::vector<Character*> arr;
	arr.push_back(&t1);
	arr.push_back(&t2);
	arr.push_back(&t3);

	//Play Game
	Game game(arr);
	game.play();

}