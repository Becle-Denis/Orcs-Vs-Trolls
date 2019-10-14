// Orc VS Trolls 
// Becle Denis C00254311
#ifndef REGENERATION
#define REGENERATION

#include "Melee.h"

/// <summary>
/// The attacker don't attack but gain Mana and lifePoint
/// Attacker + 1 PV
/// Attacker + 2 Mana
/// 100% success 
/// </summary>
class Regeneration : public Melee
{
public:
	Regeneration();
	~Regeneration();

	//Overrided Attack functions
	void doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus = 0, int magicBonusMalus = 0);

	//Overrided GameObject functions
	std::string toString();
	std::string toStringDescription();

};

#endif // !REGENERATION




