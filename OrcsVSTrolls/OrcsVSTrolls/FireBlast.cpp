#include "FireBlast.h"
#include "Interface.h"
#include <ctime>

FireBlast::FireBlast() : Spell(5)
{

}

FireBlast::~FireBlast()
{

}

void FireBlast::doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus)
{
	srand(static_cast<unsigned int>(time(0)));

	if (rand() % 100 < 75)
	{
		//success
		int attackerDamage = 1;
		int magicDamage = 4 + magicBonusMalus;
		int meleeDamage = 0;
		if (shield != nullptr)
		{
			attackerDamage += shield->defend(meleeDamage, magicDamage, 0);
		}
		Interface::display(this->toString() + " thrown");
		attacked->takeDamage(magicDamage);
		attacked->takeDamage(meleeDamage);
		attacker->takeDamage(attackerDamage);
	}
	else
	{
		//fail
		Interface::display(this->toString() + " failed");
	}
}

std::string FireBlast::toString()
{
	return "SPELL FireBlast";
}

std::string FireBlast::toStringDescription()
{
	return toString() + "\nCost : 5\nAttacked Character -4 PV\nAttacker -1 Pv\nTrhow a blast of fire on the attacked character, 25% Chance to fail";
}

