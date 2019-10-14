#include "Tap.h"
#include "Interface.h"
#include <ctime>

void Tap::doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus, int magicBonusMalus)
{
	srand(static_cast<unsigned int>(time(0)));
	if (rand() % 100 < 80)
	{
		//success
		Interface::display(this->toString() + " thrown");
		int attackerDamage = 0;
		int magicDamage = 0;
		int meleeDamage = 2 + meleeBonusMalus;

		if (shield != nullptr)
		{
			attackerDamage = shield->defend(meleeDamage, magicDamage, 0);
		}

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

std::string Tap::toString()
{
	return "Tap";
}

std::string Tap::toStringDescription()
{
	return toString() + "\nAttacked Character -2 Life Points\n80% success";
}