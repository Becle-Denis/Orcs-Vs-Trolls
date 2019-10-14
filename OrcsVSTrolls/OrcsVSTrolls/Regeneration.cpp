#include "Regeneration.h"

Regeneration::Regeneration() : Melee(false)
{

}

Regeneration::~Regeneration()
{

}

void Regeneration::doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus, int magicBonusMalus)
{
	attacker->gainHealth(1);
	attacker->gainMana(2);
}

std::string Regeneration::toString()
{
	return "Regeneration";
}

std::string Regeneration::toStringDescription()
{
	return toString() + "\nGo to sleep\n+1 Life Point\n+2 Mana Points";
}