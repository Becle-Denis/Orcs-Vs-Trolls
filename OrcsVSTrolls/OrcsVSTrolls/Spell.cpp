#include "Spell.h"
#include "Interface.h"

void Spell::doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus, int magicBonusMalus)
{
	if (attacker->spendMana(m_manaCost))
	{
		Interface::display(attacker->toString() + "Invoque" + this->toString());
		this->doSpell(attacker,attacked,shield,magicBonusMalus);
	}
	else
	{
		Interface::display("Fail of "+this->toString()+", "+attacker->toString()+" is not rich");
	}
}
