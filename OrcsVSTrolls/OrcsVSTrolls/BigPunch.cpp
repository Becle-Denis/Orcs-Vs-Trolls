#include "BigPunch.h"
#include "Interface.h"
#include <ctime>

void BigPunch::doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus, int magicBonusMalus)
{
	srand(static_cast<unsigned int>(time(0)));
	int random = rand() % 100;
	if (random < 40)
	{
		//success
		Interface::display(this->toString() + " thrown");
		int attackerDamage = 0;
		int magicDamage = 0;
		int meleeDamage = 4 + meleeBonusMalus;
		if (random < 20)
		{
			Interface::display(this->toString() + " CRITICAL");
			attackerDamage += 2;
		}

		if (shield != nullptr)
		{
			attackerDamage = shield->defend(meleeDamage, magicDamage, 0);
		}
		
		attacked->takeDamage(magicDamage);
		attacked->takeDamage(meleeDamage);
		attacker->takeDamage(attackerDamage);
	}
	else {
		//fail
		Interface::display(this->toString() + " failed");
	}
}

std::string BigPunch::toString()
{
	return "Big Punch";
}

std::string BigPunch::toStringDescription()
{
	return toString() + "A Big Punch\nAttacked Character -4 PV\nCan fail\nCritical Attacker -2 PV";
}