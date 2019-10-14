#include "Twisted.h"
#include "Interface.h"
#include <ctime>

void Twisted::doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus, int magicBonusMalus)
{
	srand(static_cast<unsigned int>(time(0)));
	if (rand() % 100 < 50)
	{
		//success
		if (shield != nullptr)
		{
			Interface::display(this->toString() + " ignore " + shield->toString());
		}
		attacked->takeDamage(4 + meleeBonusMalus);
	}
	else
	{
		//fail
		Interface::display(this->toString() + " CRITICAL Fail");
		attacker->takeDamage(4 + meleeBonusMalus);
	}
	
}

std::string Twisted::toString()
{
	return "Twisted";
}

std::string Twisted::toStringDescription()
{
	return toString() + "\nA dangerous Big Attack\nAttacked player -4 Life Points\nCRITICAL Attacker -4 Life Points\nIgnore shield";
}