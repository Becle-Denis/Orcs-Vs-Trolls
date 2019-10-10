// Orc VS Trolls 
// Becle Denis C00254311
#ifndef FIREBALL
#define FIREBALL

#include "Spell.h"

/// <summary>
/// Cost : 2 
/// defender -2PV 
/// 90% success 
/// </summary>
class FireBall : public Spell
{
public:

	FireBall();
	~FireBall();


	//Overrided Spell function 
	void doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus = 0) override;

	//Overrided GameObject functions
	std::string toString() override;
	std::string toStringDescription() override;
};


#endif // !FIREBALL


