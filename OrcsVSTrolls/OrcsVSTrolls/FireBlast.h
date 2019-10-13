// Orc VS Trolls 
// Becle Denis C00254311
#ifndef FIREBLAST
#define FIREBLAST

#include "Spell.h"

/// <summary>
/// Cost 5
/// - 4 PV defender 
/// - 1 PV attacker 
/// Sucess 75% 
/// </summary>
class FireBlast : public Spell
{
public:
	FireBlast();
	~FireBlast();

	//Overrided Spell function 
	void doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus = 0) override;

	//Overrided GameObject functions
	std::string toString() override;
	std::string toStringDescription() override;
};


#endif // !FIREBLAST




