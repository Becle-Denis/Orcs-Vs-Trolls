#include "Spell.h"
#include "Interface.h"

Spell::Spell(int manaCost, bool characterNeeded) :
	Attack(characterNeeded),
	m_manaCost(manaCost)
{

}

Spell::~Spell()
{

}

void Spell::doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus, int magicBonusMalus)
{
	if (attacker->spendMana(m_manaCost))
	{
		Interface::display(attacker->toString() + " invoque " + this->toString(),Color::YELLOW);
		this->doSpell(attacker,attacked,shield,magicBonusMalus);
	}
	else
	{
		Interface::display("Fail of "+this->toString()+", "+attacker->toString()+" is not rich",Color::RED);
	}
}
