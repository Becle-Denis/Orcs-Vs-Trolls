#include "BigFireBlast.h"
#include "Interface.h"
#include <ctime>

BigFireBlast::BigFireBlast() : Spell(7)
{

}

BigFireBlast::~BigFireBlast()
{

}

void BigFireBlast::doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus)
{
	srand(static_cast<unsigned int>(time(0)));

	if (rand() % 100 < 60)
	{
		//success
		int attackerDamage = 2;
		int magicDamage = 6 + magicBonusMalus;
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

std::string BigFireBlast::toString()
{
	return "SPELL Big FireBlast";
}

std::string BigFireBlast::toStringDescription()
{
	return toString() + "\nCost : 7\nAttacked Character -6 PV\nAttacker -2Pv\nTrhow a Big blast of fire on the attacked character, 40% Chance to fail";
}
