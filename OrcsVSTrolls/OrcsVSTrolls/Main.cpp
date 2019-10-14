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
	IceBall i1;
	IceBall i2;
	IceBall i3;

	FireBall f1;
	FireBall f2;
	FireBall f3;
	FireBlast fb1;
	FireBlast fb2;
	FireBlast fb3;
	BigFireBlast bfb1;
	BigFireBlast bfb2;
	BigFireBlast bfb3;

	Regeneration r1;
	Regeneration r2;
	Regeneration r3;

	RegenerationSpell rs1;
	RegenerationSpell rs2;
	RegenerationSpell rs3;
	

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

	t1.addAttack(&i1);
	t2.addAttack(&i2);
	t3.addAttack(&i3);

	t1.addAttack(&r1);
	t2.addAttack(&r2);
	t3.addAttack(&r3);

	t1.addAttack(&rs1);
	t2.addAttack(&rs2);
	t3.addAttack(&rs3);

	std::vector<Character*> arr;
	arr.push_back(&t1);
	arr.push_back(&t2);
	arr.push_back(&t3);


	Game game(arr);
	game.play();

}