// Orc VS Trolls 
// Becle Denis C00254311
#ifndef REGENERATIONSPELL
#define REGENERATIONSPELL

#include "Spell.h"

/// <summary>
/// Cost : 2
/// Attacker +3 PV 
/// Attacker Shield +2PV
/// </summary>
class RegenerationSpell : public Spell
{
public:
	RegenerationSpell();
	~RegenerationSpell();


	//Overrided Spell function 
	void doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus = 0) override;

	//Overrided GameObject functions
	std::string toString() override;
	std::string toStringDescription() override;
};

#endif // !REGENERATIONSPELL



