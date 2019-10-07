// Orc VS Trolls 
// Becle Denis C00254311
#ifndef MELEE
#define MELEE

#include "Attack.h"
#include "Character.h"

/// <summary>
/// Abstract class to define melee attacks
/// </summary>
class Melee : public Attack
{
public :
	virtual void doAttack(Character* attacker, Character* attacked, Shield *  shield, int meleeBonusMalus = 0, int magicBonusMalus = 0) = 0;
};

#endif // !MELEE



