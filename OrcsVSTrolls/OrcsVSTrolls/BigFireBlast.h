// Orc VS Trolls 
// Becle Denis C00254311
#ifndef BIGFIREBLAST
#define BIGFIREBLAST

#include "Spell.h"

/// <summary>
/// Cost 7
/// - 6 PV defender 
/// - 2 PV attacker 
/// Sucess 60% 
/// </summary>
class BigFireBlast : public Spell
{
public:
	BigFireBlast();
	~BigFireBlast();

	//Overrided Spell function 
	void doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus = 0) override;

	//Overrided GameObject functions
	std::string toString() override;
	std::string toStringDescription() override;
};


#endif // !BIGFIREBLAST


