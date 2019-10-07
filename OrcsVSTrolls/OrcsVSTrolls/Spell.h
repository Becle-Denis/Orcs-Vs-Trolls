// Orc VS Trolls 
// Becle Denis C00254311
#ifndef SPELL
#define SPELL

#include "Attack.h"
#include "Character.h"

/// <summary>
/// Abstract class to define spell attacks 
/// </summary>
class Spell : public Attack
{
public :
	virtual void doAttack(Character* attacker, Character* attacked, Shield * shield, int meleeBonusMalus = 0, int magicBonusMalus = 0) = 0;
	int getManaCost();
private:
	int manaCost;
};


#endif // !SPELL


