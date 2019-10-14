#include "RegenerationSpell.h"

RegenerationSpell::RegenerationSpell() : Spell(2,false)
{

}

RegenerationSpell::~RegenerationSpell()
{

}

void RegenerationSpell::doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus)
{
	Shield* attackerShieldPtr;
	attackerShieldPtr = attacker->getSelectedShieldPtr();
	
	attacker->gainHealth(3);
	if (attackerShieldPtr != nullptr)
	{
		attackerShieldPtr->gainLife(2);
	}
}

std::string RegenerationSpell::toString()
{
	return "SPELL Regeneration Spell";
}

std::string RegenerationSpell::toStringDescription()
{
	return toString() + "\nGo To Sleep\n+3 Life Point\n+2 Shield Life Points";
}