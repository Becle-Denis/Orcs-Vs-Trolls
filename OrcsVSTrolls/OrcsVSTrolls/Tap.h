// Orc VS Trolls 
// Becle Denis C00254311
#ifndef TAP
#define TAP

#include "Melee.h"

/// <summary>
/// middle attack 
/// 80% sucess 
/// Defender -2 PV  
/// </summary>
class Tap : public Melee {
public:

	//Overrided Attack functions
	void doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus = 0, int magicBonusMalus = 0);

	//Overrided GameObject functions
	std::string toString();
	std::string toStringDescription();
};

#endif // !TAP




