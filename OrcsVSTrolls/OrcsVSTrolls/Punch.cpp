#include "Punch.h"
#include "Interface.h"

void Punch::doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus, int magicBonusMalus)
{
	if (shield != nullptr)
	{
		Interface::display(this->toString() + " ignore " + shield->toString());
	}
	attacked->takeDamage(1 + meleeBonusMalus);
}

std::string Punch::toString()
{
	return "Punch";
}

std::string Punch::toStringDescription()
{
	return toString() + "\nJust a simple punch\n-1 life Point for the attacked player";
}