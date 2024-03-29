// Orc VS Trolls 
// Becle Denis C00254311
#ifndef BIGPUNCH
#define BIGPUNCH

#include "Melee.h"

/// <summary>
/// Big Attack 
/// Success 40% 
/// Defender -4 PV 
/// Sucess 20%
/// Defender -4 PV 
/// Attacker -2 PV 
/// </summary>
class BigPunch : public Melee
{
	//Overrided Attack functions
	void doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus = 0, int magicBonusMalus = 0);

	//Overrided GameObject functions
	std::string toString();
	std::string toStringDescription();
};

#endif // !BIGPUNCH




