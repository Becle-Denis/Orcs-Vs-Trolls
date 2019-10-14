// Orc VS Trolls 
// Becle Denis C00254311
#ifndef ICEBALL
#define ICEBALL

#include "Spell.h"

/// <summary>
/// Cost 5 Mana 
/// The attacker can play 2 more attack
/// Success 90% 
/// </summary>
class IceBall : public Spell
{
public:
	IceBall();
	~IceBall();

	//Overrided Spell function 
	void doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus = 0) override;

	//Overrided GameObject functions
	std::string toString() override;
	std::string toStringDescription() override;

};

#endif // !ICEBALL




