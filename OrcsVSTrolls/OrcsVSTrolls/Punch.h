// Orc VS Trolls 
// Becle Denis C00254311
#ifndef PUNCH
#define PUNCH

#include "Melee.h"

/// <summary>
/// Little attack 
/// 100% success
/// Defender -1 PV 
/// Ignore shield
/// </summary>
class Punch : public Melee  {
	//Overrided Attack functions
	void doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus = 0, int magicBonusMalus = 0);

	//Overrided GameObject functions
	std::string toString();
	std::string toStringDescription();
};

#endif // !PUNCH