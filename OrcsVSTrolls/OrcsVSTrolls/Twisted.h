// Orc VS Trolls 
// Becle Denis C00254311
#ifndef TWISTED
#define TWISTED

#include "Melee.h"
/// <summary>
/// dangerous big attack
/// ignore shield 
/// 50% success
/// 
/// Success : 
///		Defender -4PV
/// 
/// Fail : 
///		Attacker -4PV 
/// </summary>
class Twisted : public Melee
{
public:
	//Overrided Attack functions
	void doAttack(Character* attacker, Character* attacked, Shield* shield, int meleeBonusMalus = 0, int magicBonusMalus = 0);

	//Overrided GameObject functions
	std::string toString();
	std::string toStringDescription();
};


#endif // !TWISTED


