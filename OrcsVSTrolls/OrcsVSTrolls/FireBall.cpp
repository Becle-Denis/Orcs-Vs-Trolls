#include "FireBall.h"
#include <cstdlib>
#include <ctime>
#include "Interface.h"

FireBall::FireBall() :
	Spell(2)
{

}

FireBall::~FireBall()
{

}

void FireBall::doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus)
{
	srand(static_cast<unsigned int>(time(0)));
	
	if (rand() % 100 > 10)
	{
		//success
		int attackerDamage = 0;
		int magicDamage = 2 + magicBonusMalus;
		int meleeDamage = 0;
		if (shield != nullptr)
		{
			attackerDamage = shield->defend(meleeDamage, magicDamage, 0);
		}
		Interface::display(this->toString() + " thrown");
		attacked->takeDamage(magicDamage);
		attacked->takeDamage(meleeDamage);
		attacker->takeDamage(attackerDamage);
	}
	else {
		//fail
		Interface::display(this->toString() + " failed");
	}
}

std::string FireBall::toString()
{
	return "SPELL FireBall";
}

std::string FireBall::toStringDescription()
{
	return toString()+"\nCost : 2\nAttacked Character -2 PV\nThrow a fire ball on the attacked character\nLow Chance to fail";
}
